#include "mainwindow.h"
#include "dialoglogin.h"
#include "dialogabout.h"
#include "ui_mainwindow.h"
#include <QSqlQuery>
#include <QSqlRecord>
#include <QDebug>
#include <QStringList>
#include <QMessageBox>
#include <QSqlError>
#include <QFile>
#include <QFileDialog>
#include <QByteArray>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    chargerBDD();
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::chargerBDD(){
    QSqlQuery reqChargeBDD("show databases;");
    while (reqChargeBDD.next())
    {
        QString nomBDD=reqChargeBDD.value(0).toString();
        ui->comboBoxBase->addItem(nomBDD);
    }
}


void MainWindow::on_comboBoxBase_currentIndexChanged(const QString arg1)
{
    ui->listWidgetChamps->clear();
    ui->listWidgetTables->clear();
   QSqlDatabase dataBase=QSqlDatabase::database();
   dataBase.setDatabaseName(arg1);
   dataBase.close();
    if (dataBase.open())
    {
        QSqlQuery reqChargeTables("show tables;");
        while (reqChargeTables.next())
        {
            QString nomTable=reqChargeTables.value(0).toString();
            ui->listWidgetTables->addItem(nomTable);
        }
    }
}

void MainWindow::on_listWidgetTables_currentRowChanged()
{
    if(ui->listWidgetTables->currentItem())
    {
        QString nomTable=ui->listWidgetTables->currentItem()->text();
        QSqlQuery reqShowFields("show fields from " + nomTable + ";");
        ui->listWidgetChamps->clear();
        while (reqShowFields.next())
        {
            QString nomChamp=reqShowFields.value(0).toString();
            ui->listWidgetChamps->addItem(nomChamp);
        }
    }
}

void MainWindow::on_textEditRequete_textChanged()
{
    QString reqText=ui->textEditRequete->toPlainText();
    QSqlQuery reqSaisie(reqText);
    if (reqSaisie.exec())
    {
        if (!(ui->listWidgetHistorique->findItems(reqText , Qt::MatchContains | Qt::MatchRecursive).isEmpty()))
        {
            ui->pushButtonEnregistrer->setEnabled(false);
        }
        else
        {
            ui->pushButtonEnregistrer->setEnabled(true);
        }
        ui->pushButtonError->setEnabled(false);
        ui->pushButtonError->setStyleSheet("background-color: green;");
        QSqlRecord recSaisie=reqSaisie.record();
        QStringList listCol;
        int nbLigne=reqSaisie.size()-1;
        int nbCol=recSaisie.count();
        for(int col=0; col<= nbCol; col++)
        {
           QString nomCol=recSaisie.fieldName(col);
           listCol.push_back(nomCol);
        }
        ui->tableWidgetResultat->setRowCount(0);
        ui->tableWidgetResultat->setRowCount(nbLigne);
        ui->tableWidgetResultat->setColumnCount(nbCol);
        ui->tableWidgetResultat->setHorizontalHeaderLabels(listCol);
        int cptL=0;
        while (reqSaisie.next())
        {
            int cptC=0;
            while(cptC < nbCol)
            {
                QString resultat=reqSaisie.value(cptC).toString();
                QTableWidgetItem *itemResultat=new QTableWidgetItem(resultat);
                ui->tableWidgetResultat->setItem(cptL,cptC,itemResultat);
                cptC++;
            }
            cptL++;
        }
    }
    else
    {
      ui->tableWidgetResultat->clear();
      ui->tableWidgetResultat->setRowCount(0);
      ui->tableWidgetResultat->setColumnCount(0);
      ui->pushButtonError->setEnabled(true);
      ui->pushButtonEnregistrer->setEnabled(false);
      ui->pushButtonError->setStyleSheet("background-color: red;");
    }
}

void MainWindow::on_pushButtonError_clicked()
{
    QString reqText=ui->textEditRequete->toPlainText();
    QSqlQuery reqSaisie(reqText);
    QString error= reqSaisie.lastError().text();
    QMessageBox::critical(this, "Erreur", error);
    return;
}

void MainWindow::on_pushButtonEnregistrer_clicked()
{
    ui->listWidgetHistorique->addItem(ui->textEditRequete->toPlainText());
    ui->pushButtonEnregistrer->setEnabled(false);
}

void MainWindow::on_listWidgetHistorique_itemClicked()
{
    ui->textEditRequete->setText(ui->listWidgetHistorique->currentItem()->text());
}

void MainWindow::on_pushButtonClear_clicked()
{
    ui->listWidgetHistorique->clear();
}

void MainWindow::on_pushButtonSupprimer_clicked()
{
   delete ui->listWidgetHistorique->currentItem();
}

void MainWindow::on_pushButtonSauvegarder_clicked()
{
    QString fichier = QFileDialog::getSaveFileName(this,tr("Save File"), "/home", ".sql");
    QFile file(fichier);
         if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
             return;
         QTextStream out(&file);
         for(int resul=0; resul< ui->listWidgetHistorique->count();resul++)
          {
             QString data=ui->listWidgetHistorique->item(resul)->text();
             out << data << "\n";
          }
}

void MainWindow::on_pushButtonOuvrir_clicked()
{
    QString fichier = QFileDialog::getOpenFileName(this,tr("Open File"), "/home", "*.sql");
    QFile file(fichier);
         if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
         {
             ui->listWidgetHistorique->clear();
             return;
         }
         QTextStream in(&file);
         while (!in.atEnd())
             {
                    QString line = in.readLine();
                    ui->listWidgetHistorique->addItem(line);
              }
}

void MainWindow::on_actionLeave_triggered()
{
    QMessageBox msgBox;
    msgBox.setInformativeText("Voulez-vous vraiment quitter");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::No);
    int ret = msgBox.exec();

    if (ret==QMessageBox::Yes)
        close();
}

void MainWindow::on_pushButtonExporter_clicked()
{
    QString fichier = QFileDialog::getSaveFileName(this,tr("Save File"), "/home", ".csv");
    QFile file(fichier);
         if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
             return;
         QTextStream out(&file);
         for(int row=0; row< ui->tableWidgetResultat->rowCount();row++)
         {
             for(int col=0; col< ui->tableWidgetResultat->columnCount();col++)
             {
                 QString data=ui->tableWidgetResultat->item(row,col)->text();
                 out << data << "\n";
             }
         }
}

void MainWindow::on_actionAbout_triggered()
{
    DialogAbout dialAbout;
    dialAbout.exec();
}

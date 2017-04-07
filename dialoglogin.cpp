#include "dialoglogin.h"
#include "ui_dialoglogin.h"
#include <QSqlQuery>
#include <QDebug>
#include <QSqlDatabase>
#include <QMessageBox>
DialogLogin::DialogLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogLogin)
{
    qDebug() << "DialogLogin::DialogLogin(QWidget *parent)";
    ui->setupUi(this);
}

DialogLogin::~DialogLogin()
{
    qDebug() << "~DialogLogin()";
    delete ui;
}

void DialogLogin::activatedConnexionButton()
{
    qDebug() << "void DialogLogin::activatedConnexionButton()";
    ui->pushButtonConnexion->setEnabled(ui->lineEditLogin->text()!=""&& ui->lineEditPassword->text()!="");
}
void DialogLogin::on_lineEditLogin_textChanged()
{
    qDebug() << "void DialogLogin::on_lineEditLogin_textChanged()";
    activatedConnexionButton();
}

void DialogLogin::on_lineEditPassword_textChanged()
{
    qDebug() << "void DialogLogin::on_lineEditPassword_textChanged()";
    activatedConnexionButton();
}
void DialogLogin::on_pushButtonConnexion_clicked()
{
    qDebug() << "void DialogLogin::on_pushButtonConnexion_clicked()";
    QString login=ui->lineEditLogin->text();
    QString password=ui->lineEditPassword->text();
    QString serveur=ui->lineEditServeur->text();
    QSqlDatabase dataBase=QSqlDatabase::database();
    dataBase.setHostName(serveur);
    dataBase.setUserName(login);
    dataBase.setPassword(password);
    if(dataBase.open())
    {
    accept();
    }
    else
    {
        qDebug() << "combinaison mot de passe , utilisateur non valide" << endl;
    }
}


void DialogLogin::on_pushButtonCancel_clicked()
{
    qDebug() << "void DialogLogin::on_pushButtonCancel_clicked()";
    qDebug() << "au revoir" << endl;
    reject();
}

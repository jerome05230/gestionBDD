/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLeave;
    QAction *actionAbout;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_5;
    QLabel *labelDatabase;
    QSpacerItem *horizontalSpacer;
    QComboBox *comboBoxBase;
    QSpacerItem *horizontalSpacer_2;
    QFormLayout *formLayout_3;
    QFormLayout *formLayout_2;
    QLabel *labelTables;
    QListWidget *listWidgetTables;
    QFormLayout *formLayout;
    QLabel *labelFields;
    QListWidget *listWidgetChamps;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelRequete;
    QTextEdit *textEditRequete;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButtonEnregistrer;
    QPushButton *pushButtonError;
    QLabel *label_7;
    QTableWidget *tableWidgetResultat;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonExporter;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelHistorique;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButtonOuvrir;
    QPushButton *pushButtonSauvegarder;
    QListWidget *listWidgetHistorique;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonClear;
    QPushButton *pushButtonSupprimer;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuGestionBDD;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(822, 884);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icones/icones/gestionBDD.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionLeave = new QAction(MainWindow);
        actionLeave->setObjectName(QString::fromUtf8("actionLeave"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout_6 = new QHBoxLayout(centralWidget);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        labelDatabase = new QLabel(centralWidget);
        labelDatabase->setObjectName(QString::fromUtf8("labelDatabase"));

        horizontalLayout_7->addWidget(labelDatabase);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        comboBoxBase = new QComboBox(centralWidget);
        comboBoxBase->setObjectName(QString::fromUtf8("comboBoxBase"));

        horizontalLayout_7->addWidget(comboBoxBase);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_7);

        formLayout_3 = new QFormLayout();
        formLayout_3->setSpacing(6);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        labelTables = new QLabel(centralWidget);
        labelTables->setObjectName(QString::fromUtf8("labelTables"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, labelTables);

        listWidgetTables = new QListWidget(centralWidget);
        listWidgetTables->setObjectName(QString::fromUtf8("listWidgetTables"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, listWidgetTables);


        formLayout_3->setLayout(0, QFormLayout::LabelRole, formLayout_2);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        labelFields = new QLabel(centralWidget);
        labelFields->setObjectName(QString::fromUtf8("labelFields"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelFields);

        listWidgetChamps = new QListWidget(centralWidget);
        listWidgetChamps->setObjectName(QString::fromUtf8("listWidgetChamps"));

        formLayout->setWidget(1, QFormLayout::LabelRole, listWidgetChamps);


        formLayout_3->setLayout(0, QFormLayout::FieldRole, formLayout);


        verticalLayout_2->addLayout(formLayout_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));

        verticalLayout_3->addLayout(horizontalLayout_2);

        labelRequete = new QLabel(centralWidget);
        labelRequete->setObjectName(QString::fromUtf8("labelRequete"));

        verticalLayout_3->addWidget(labelRequete);

        textEditRequete = new QTextEdit(centralWidget);
        textEditRequete->setObjectName(QString::fromUtf8("textEditRequete"));

        verticalLayout_3->addWidget(textEditRequete);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        pushButtonEnregistrer = new QPushButton(centralWidget);
        pushButtonEnregistrer->setObjectName(QString::fromUtf8("pushButtonEnregistrer"));
        pushButtonEnregistrer->setEnabled(false);

        horizontalLayout_3->addWidget(pushButtonEnregistrer);

        pushButtonError = new QPushButton(centralWidget);
        pushButtonError->setObjectName(QString::fromUtf8("pushButtonError"));
        pushButtonError->setEnabled(false);

        horizontalLayout_3->addWidget(pushButtonError);


        verticalLayout_3->addLayout(horizontalLayout_3);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_3->addWidget(label_7);

        tableWidgetResultat = new QTableWidget(centralWidget);
        tableWidgetResultat->setObjectName(QString::fromUtf8("tableWidgetResultat"));
        tableWidgetResultat->verticalHeader()->setVisible(false);

        verticalLayout_3->addWidget(tableWidgetResultat);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        pushButtonExporter = new QPushButton(centralWidget);
        pushButtonExporter->setObjectName(QString::fromUtf8("pushButtonExporter"));

        horizontalLayout_5->addWidget(pushButtonExporter);


        verticalLayout_3->addLayout(horizontalLayout_5);


        verticalLayout_2->addLayout(verticalLayout_3);


        horizontalLayout_6->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 0, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 0, 2, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        labelHistorique = new QLabel(centralWidget);
        labelHistorique->setObjectName(QString::fromUtf8("labelHistorique"));

        verticalLayout_4->addWidget(labelHistorique);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButtonOuvrir = new QPushButton(centralWidget);
        pushButtonOuvrir->setObjectName(QString::fromUtf8("pushButtonOuvrir"));

        horizontalLayout_4->addWidget(pushButtonOuvrir);

        pushButtonSauvegarder = new QPushButton(centralWidget);
        pushButtonSauvegarder->setObjectName(QString::fromUtf8("pushButtonSauvegarder"));

        horizontalLayout_4->addWidget(pushButtonSauvegarder);


        verticalLayout_4->addLayout(horizontalLayout_4);

        listWidgetHistorique = new QListWidget(centralWidget);
        listWidgetHistorique->setObjectName(QString::fromUtf8("listWidgetHistorique"));

        verticalLayout_4->addWidget(listWidgetHistorique);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButtonClear = new QPushButton(centralWidget);
        pushButtonClear->setObjectName(QString::fromUtf8("pushButtonClear"));

        horizontalLayout->addWidget(pushButtonClear);

        pushButtonSupprimer = new QPushButton(centralWidget);
        pushButtonSupprimer->setObjectName(QString::fromUtf8("pushButtonSupprimer"));

        horizontalLayout->addWidget(pushButtonSupprimer);


        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout->addLayout(verticalLayout_4);


        horizontalLayout_6->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralWidget);
        label->raise();
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 822, 27));
        menuGestionBDD = new QMenu(menuBar);
        menuGestionBDD->setObjectName(QString::fromUtf8("menuGestionBDD"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuGestionBDD->menuAction());
        menuGestionBDD->addSeparator();
        menuGestionBDD->addAction(actionLeave);
        menuGestionBDD->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "gestionBDD", 0, QApplication::UnicodeUTF8));
        actionLeave->setText(QApplication::translate("MainWindow", "Leave", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        labelDatabase->setText(QApplication::translate("MainWindow", "DataBases", 0, QApplication::UnicodeUTF8));
        labelTables->setText(QApplication::translate("MainWindow", "Tables", 0, QApplication::UnicodeUTF8));
        labelFields->setText(QApplication::translate("MainWindow", "Fields", 0, QApplication::UnicodeUTF8));
        labelRequete->setText(QApplication::translate("MainWindow", "Entering the request:", 0, QApplication::UnicodeUTF8));
        pushButtonEnregistrer->setText(QApplication::translate("MainWindow", "&History", 0, QApplication::UnicodeUTF8));
        pushButtonError->setText(QApplication::translate("MainWindow", "&?", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Result", 0, QApplication::UnicodeUTF8));
        pushButtonExporter->setText(QApplication::translate("MainWindow", "&Export", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/icones/icones/gestionBDD.png\"/></p></body></html>", 0, QApplication::UnicodeUTF8));
        labelHistorique->setText(QApplication::translate("MainWindow", "Historical", 0, QApplication::UnicodeUTF8));
        pushButtonOuvrir->setText(QApplication::translate("MainWindow", "&Open", 0, QApplication::UnicodeUTF8));
        pushButtonSauvegarder->setText(QApplication::translate("MainWindow", "&Save", 0, QApplication::UnicodeUTF8));
        pushButtonClear->setText(QApplication::translate("MainWindow", "&Clean", 0, QApplication::UnicodeUTF8));
        pushButtonSupprimer->setText(QApplication::translate("MainWindow", "&Delete", 0, QApplication::UnicodeUTF8));
        menuGestionBDD->setTitle(QApplication::translate("MainWindow", "Files", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLeave;
    QAction *actionAbout;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_5;
    QLabel *labelDatabase;
    QSpacerItem *horizontalSpacer;
    QComboBox *comboBoxBase;
    QSpacerItem *horizontalSpacer_2;
    QFormLayout *formLayout;
    QLabel *labelTables;
    QLabel *labelFields;
    QListWidget *listWidgetTables;
    QListWidget *listWidgetChamps;
    QLabel *labelRequete;
    QTextEdit *textEditRequete;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButtonEnregistrer;
    QPushButton *pushButtonError;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_7;
    QTableWidget *tableWidgetResultat;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *pushButtonExporter;
    QSpacerItem *horizontalSpacer_9;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label;
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
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(804, 810);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icones/icones/gestionBDD.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionLeave = new QAction(MainWindow);
        actionLeave->setObjectName(QStringLiteral("actionLeave"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_5 = new QHBoxLayout(centralWidget);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        labelDatabase = new QLabel(centralWidget);
        labelDatabase->setObjectName(QStringLiteral("labelDatabase"));

        horizontalLayout_6->addWidget(labelDatabase);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        comboBoxBase = new QComboBox(centralWidget);
        comboBoxBase->setObjectName(QStringLiteral("comboBoxBase"));

        horizontalLayout_6->addWidget(comboBoxBase);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_6);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        labelTables = new QLabel(centralWidget);
        labelTables->setObjectName(QStringLiteral("labelTables"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelTables);

        labelFields = new QLabel(centralWidget);
        labelFields->setObjectName(QStringLiteral("labelFields"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelFields);

        listWidgetTables = new QListWidget(centralWidget);
        listWidgetTables->setObjectName(QStringLiteral("listWidgetTables"));

        formLayout->setWidget(1, QFormLayout::LabelRole, listWidgetTables);

        listWidgetChamps = new QListWidget(centralWidget);
        listWidgetChamps->setObjectName(QStringLiteral("listWidgetChamps"));

        formLayout->setWidget(1, QFormLayout::FieldRole, listWidgetChamps);


        verticalLayout_2->addLayout(formLayout);

        labelRequete = new QLabel(centralWidget);
        labelRequete->setObjectName(QStringLiteral("labelRequete"));

        verticalLayout_2->addWidget(labelRequete);

        textEditRequete = new QTextEdit(centralWidget);
        textEditRequete->setObjectName(QStringLiteral("textEditRequete"));

        verticalLayout_2->addWidget(textEditRequete);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        pushButtonEnregistrer = new QPushButton(centralWidget);
        pushButtonEnregistrer->setObjectName(QStringLiteral("pushButtonEnregistrer"));
        pushButtonEnregistrer->setEnabled(false);

        horizontalLayout_2->addWidget(pushButtonEnregistrer);

        pushButtonError = new QPushButton(centralWidget);
        pushButtonError->setObjectName(QStringLiteral("pushButtonError"));
        pushButtonError->setEnabled(false);

        horizontalLayout_2->addWidget(pushButtonError);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);


        verticalLayout_2->addLayout(horizontalLayout_2);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_2->addWidget(label_7);

        tableWidgetResultat = new QTableWidget(centralWidget);
        tableWidgetResultat->setObjectName(QStringLiteral("tableWidgetResultat"));
        tableWidgetResultat->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(tableWidgetResultat);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_11);

        pushButtonExporter = new QPushButton(centralWidget);
        pushButtonExporter->setObjectName(QStringLiteral("pushButtonExporter"));

        horizontalLayout_3->addWidget(pushButtonExporter);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_9);


        verticalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout_5->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 0, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 0, 3, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        labelHistorique = new QLabel(centralWidget);
        labelHistorique->setObjectName(QStringLiteral("labelHistorique"));

        verticalLayout->addWidget(labelHistorique);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButtonOuvrir = new QPushButton(centralWidget);
        pushButtonOuvrir->setObjectName(QStringLiteral("pushButtonOuvrir"));

        horizontalLayout_4->addWidget(pushButtonOuvrir);

        pushButtonSauvegarder = new QPushButton(centralWidget);
        pushButtonSauvegarder->setObjectName(QStringLiteral("pushButtonSauvegarder"));

        horizontalLayout_4->addWidget(pushButtonSauvegarder);


        verticalLayout->addLayout(horizontalLayout_4);

        listWidgetHistorique = new QListWidget(centralWidget);
        listWidgetHistorique->setObjectName(QStringLiteral("listWidgetHistorique"));

        verticalLayout->addWidget(listWidgetHistorique);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButtonClear = new QPushButton(centralWidget);
        pushButtonClear->setObjectName(QStringLiteral("pushButtonClear"));

        horizontalLayout->addWidget(pushButtonClear);

        pushButtonSupprimer = new QPushButton(centralWidget);
        pushButtonSupprimer->setObjectName(QStringLiteral("pushButtonSupprimer"));

        horizontalLayout->addWidget(pushButtonSupprimer);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_5->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralWidget);
        pushButtonExporter->raise();
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 804, 21));
        menuGestionBDD = new QMenu(menuBar);
        menuGestionBDD->setObjectName(QStringLiteral("menuGestionBDD"));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "gestionBDD", 0));
        actionLeave->setText(QApplication::translate("MainWindow", "Leave", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
        labelDatabase->setText(QApplication::translate("MainWindow", "DataBases", 0));
        labelTables->setText(QApplication::translate("MainWindow", "Tables", 0));
        labelFields->setText(QApplication::translate("MainWindow", "Fields", 0));
        labelRequete->setText(QApplication::translate("MainWindow", "Entering the request:", 0));
        pushButtonEnregistrer->setText(QApplication::translate("MainWindow", "&History", 0));
        pushButtonError->setText(QApplication::translate("MainWindow", "&?", 0));
        label_7->setText(QApplication::translate("MainWindow", "Result", 0));
        pushButtonExporter->setText(QApplication::translate("MainWindow", "&Export", 0));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/icones/icones/gestionBDD.png\"/></p></body></html>", 0));
        labelHistorique->setText(QApplication::translate("MainWindow", "Historical", 0));
        pushButtonOuvrir->setText(QApplication::translate("MainWindow", "&Open", 0));
        pushButtonSauvegarder->setText(QApplication::translate("MainWindow", "&Save", 0));
        pushButtonClear->setText(QApplication::translate("MainWindow", "&Clean", 0));
        pushButtonSupprimer->setText(QApplication::translate("MainWindow", "&Delete", 0));
        menuGestionBDD->setTitle(QApplication::translate("MainWindow", "Files", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

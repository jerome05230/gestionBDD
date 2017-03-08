/********************************************************************************
** Form generated from reading UI file 'dialogabout.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGABOUT_H
#define UI_DIALOGABOUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogAbout
{
public:
    QFormLayout *formLayout;
    QDialogButtonBox *buttonBox;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *textBrowser;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QTextBrowser *textBrowser_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *DialogAbout)
    {
        if (DialogAbout->objectName().isEmpty())
            DialogAbout->setObjectName(QString::fromUtf8("DialogAbout"));
        DialogAbout->resize(422, 386);
        formLayout = new QFormLayout(DialogAbout);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        buttonBox = new QDialogButtonBox(DialogAbout);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        formLayout->setWidget(0, QFormLayout::LabelRole, buttonBox);

        tabWidget = new QTabWidget(DialogAbout);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        horizontalLayout = new QHBoxLayout(tab);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textBrowser = new QTextBrowser(tab);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setOpenExternalLinks(true);

        horizontalLayout->addWidget(textBrowser);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
#ifndef QT_NO_STATUSTIP
        label_2->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        label_2->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
#ifndef QT_NO_WHATSTHIS
        label_3->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS

        verticalLayout_2->addWidget(label_3);

        textBrowser_2 = new QTextBrowser(tab_2);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setOpenExternalLinks(true);

        verticalLayout_2->addWidget(textBrowser_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        label = new QLabel(tab_2);
        label->setObjectName(QString::fromUtf8("label"));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        label->setStatusTip(QString::fromUtf8(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        label->setWhatsThis(QString::fromUtf8(""));
#endif // QT_NO_WHATSTHIS

        horizontalLayout_3->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        tabWidget->addTab(tab_2, QString());

        formLayout->setWidget(1, QFormLayout::LabelRole, tabWidget);

        QWidget::setTabOrder(tabWidget, textBrowser);
        QWidget::setTabOrder(textBrowser, textBrowser_2);

        retranslateUi(DialogAbout);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DialogAbout);
    } // setupUi

    void retranslateUi(QDialog *DialogAbout)
    {
        DialogAbout->setWindowTitle(QApplication::translate("DialogAbout", "Dialog", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("DialogAbout", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt;\">GestionBDD is an open source project. The members of the JBaronCampos's Software team invest their free time in this project. Even small donations like 10 Euros show us that somebody likes the work we do. The donations motivate all team members to continue investing time in this project.There are several levels of sponsorship. For details see the </span><a href=\"http://www.jbaron-portfolio.ovh/\"><span style=\" font-family:'Sans Serif'; font-size:9pt; text-decoration: underline; color:#0000ff;\">becom"
                        "e a Sponsor</span></a><span style=\" font-family:'Sans Serif'; font-size:9pt;\"> page.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"gthom.btsinfogap.org\"><span style=\" font-family:'Sans Serif'; font-size:9pt; text-decoration: underline; color:#0000ff;\">Project GestionBDD website</span></a><span style=\" font-family:'Sans Serif'; font-size:9pt;\">.</span></p>\n"
"<p style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a name=\"idm140278778939456\"></a><span style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:600;\">S</span><span style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:600;\">outenez le logiciel libre</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt;\">Ce logiciel  est s"
                        "ous licence GPL. Merci de  participer financi\303\250rement au projet.</span><a href=\"https://www.paypal.me/JeromeBaronCampos\"><span style=\" font-family:'Sans Serif'; font-size:9pt; text-decoration: underline; color:#0000ff;\">Donate via Paypal</span></a><span style=\" font-family:'Sans Serif'; font-size:9pt;\">.				</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt;\">Copyright (C) J\303\251r\303\264me Baron-Campos 2017-2018      This program is free software: you can redistribute it and/or modify    it under the terms of the GNU General Public License as published by    the Free Software Foundation, either version 3 of the License, or any later version.    This program is distributed in the hope that it will be useful,    but WITHOUT ANY WARRANTY; without even the implied warranty of    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the    GNU General Publ"
                        "ic License for more details.   </span></p></body></html>", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("DialogAbout", "Licence", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DialogAbout", "Author: J\303\251r\303\264me Baron-Campos", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DialogAbout", "Mail: jerome.baroncampos@gmail.com", 0, QApplication::UnicodeUTF8));
        textBrowser_2->setHtml(QApplication::translate("DialogAbout", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt;\">L'auteur est </span><span style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:600;\">\303\251tudiant d'informatique</span><span style=\" font-family:'Sans Serif'; font-size:9pt;\"> en Section de Technicien Sup\303\251rieur &quot;Services Informatiques aux Organisations&quot; session 2015/2017.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt;\">Cette "
                        "section post-bac plus commun\303\251ment nomm\303\251e BTS SIO </span><a href=\"http://www.btsinfogap.org\"><span style=\" font-family:'Sans Serif'; font-size:9pt; text-decoration: underline; color:#0000ff;\"> www.btsinfogap.org</span></a><span style=\" font-family:'Sans Serif'; font-size:9pt;\"> a \303\251t\303\251 cr\303\251\303\251e en 1984  au sein du</span><a href=\"https://www.atrium-paca.fr/web/lgt-dominique-villars-050101/lycee-villars?\"><span style=\" font-family:'Sans Serif'; font-size:9pt; text-decoration: underline; color:#0000ff;\"> Lyc\303\251e Dominique Villars</span></a><span style=\" font-family:'Sans Serif'; font-size:9pt;\">. </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt;\">Elle permet de former en deux ans de vrais professionnels de l'informatique sp\303\251cialis\303\251s soit en d\303\251veloppement soit en r\303\251seau.</span></p>\n"
"<p st"
                        "yle=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt;\">l'auteur \303\251tudit: l'analyse des donn\303\251es, le d\303\251veloppement d'applications Web (PHP,javascript/ajax,Html/css), <br />la programmation objet en c++ ainsi que la programmation \303\251venementielle avec Qt, ainsi que le d\303\251veloppement d'applications android.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt;\">Ce logiciel  est sous licence GPL. </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt;\">Pour que ce logiciel perdure et s'am\303\251liore, merci de participer financi\303\250rement au projet.</span></p>\n"
"<p style=\" margin-to"
                        "p:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"https://www.paypal.me/JeromeBaronCampos\"><span style=\" font-family:'Sans Serif'; font-size:9pt; text-decoration: underline; color:#0000ff;\">Donate via Paypal</span></a></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt;\">Visitez le site du </span><a href=\"http://www.jbaron-portfolio.ovh/\"><span style=\" font-family:'Sans Serif'; font-size:9pt; text-decoration: underline; color:#0000ff;\">projet gestionBDD</span></a><span style=\" font-family:'Sans Serif'; font-size:9pt;\">.				</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogAbout", "Copyright @ J\303\251r\303\264me Baron-Campos 2017", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("DialogAbout", "Author", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogAbout: public Ui_DialogAbout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGABOUT_H

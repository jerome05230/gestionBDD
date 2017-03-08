/********************************************************************************
** Form generated from reading UI file 'dialoglogin.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGLOGIN_H
#define UI_DIALOGLOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogLogin
{
public:
    QGridLayout *gridLayout;
    QLabel *labelPassword;
    QLineEdit *lineEditPassword;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonConnexion;
    QPushButton *pushButtonCancel;
    QLineEdit *lineEditLogin;
    QLabel *labelLogin;

    void setupUi(QDialog *DialogLogin)
    {
        if (DialogLogin->objectName().isEmpty())
            DialogLogin->setObjectName(QString::fromUtf8("DialogLogin"));
        DialogLogin->resize(436, 129);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icones/icones/gestionBDD.png"), QSize(), QIcon::Normal, QIcon::Off);
        DialogLogin->setWindowIcon(icon);
        gridLayout = new QGridLayout(DialogLogin);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelPassword = new QLabel(DialogLogin);
        labelPassword->setObjectName(QString::fromUtf8("labelPassword"));

        gridLayout->addWidget(labelPassword, 1, 0, 1, 1);

        lineEditPassword = new QLineEdit(DialogLogin);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));
        lineEditPassword->setEnabled(true);
        lineEditPassword->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEditPassword, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButtonConnexion = new QPushButton(DialogLogin);
        pushButtonConnexion->setObjectName(QString::fromUtf8("pushButtonConnexion"));
        pushButtonConnexion->setEnabled(false);

        horizontalLayout->addWidget(pushButtonConnexion);

        pushButtonCancel = new QPushButton(DialogLogin);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));

        horizontalLayout->addWidget(pushButtonCancel);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        lineEditLogin = new QLineEdit(DialogLogin);
        lineEditLogin->setObjectName(QString::fromUtf8("lineEditLogin"));

        gridLayout->addWidget(lineEditLogin, 0, 1, 1, 1);

        labelLogin = new QLabel(DialogLogin);
        labelLogin->setObjectName(QString::fromUtf8("labelLogin"));

        gridLayout->addWidget(labelLogin, 0, 0, 1, 1);

        QWidget::setTabOrder(lineEditLogin, lineEditPassword);
        QWidget::setTabOrder(lineEditPassword, pushButtonConnexion);
        QWidget::setTabOrder(pushButtonConnexion, pushButtonCancel);

        retranslateUi(DialogLogin);

        QMetaObject::connectSlotsByName(DialogLogin);
    } // setupUi

    void retranslateUi(QDialog *DialogLogin)
    {
        DialogLogin->setWindowTitle(QApplication::translate("DialogLogin", "Connection", 0, QApplication::UnicodeUTF8));
        labelPassword->setText(QApplication::translate("DialogLogin", "Password:", 0, QApplication::UnicodeUTF8));
        pushButtonConnexion->setText(QApplication::translate("DialogLogin", "&Login", 0, QApplication::UnicodeUTF8));
        pushButtonCancel->setText(QApplication::translate("DialogLogin", "&Cancel", 0, QApplication::UnicodeUTF8));
        labelLogin->setText(QApplication::translate("DialogLogin", "Login: ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogLogin: public Ui_DialogLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGLOGIN_H

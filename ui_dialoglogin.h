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
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogLogin
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *labelLogin;
    QLineEdit *lineEditLogin;
    QLabel *labelPassword;
    QLineEdit *lineEditPassword;
    QLabel *labelServeur;
    QLineEdit *lineEditServeur;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonConnexion;
    QPushButton *pushButtonCancel;

    void setupUi(QDialog *DialogLogin)
    {
        if (DialogLogin->objectName().isEmpty())
            DialogLogin->setObjectName(QString::fromUtf8("DialogLogin"));
        DialogLogin->resize(436, 252);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icones/icones/gestionBDD.png"), QSize(), QIcon::Normal, QIcon::Off);
        DialogLogin->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(DialogLogin);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        labelLogin = new QLabel(DialogLogin);
        labelLogin->setObjectName(QString::fromUtf8("labelLogin"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelLogin);

        lineEditLogin = new QLineEdit(DialogLogin);
        lineEditLogin->setObjectName(QString::fromUtf8("lineEditLogin"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditLogin);

        labelPassword = new QLabel(DialogLogin);
        labelPassword->setObjectName(QString::fromUtf8("labelPassword"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelPassword);

        lineEditPassword = new QLineEdit(DialogLogin);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));
        lineEditPassword->setEnabled(true);
        lineEditPassword->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditPassword);

        labelServeur = new QLabel(DialogLogin);
        labelServeur->setObjectName(QString::fromUtf8("labelServeur"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelServeur);

        lineEditServeur = new QLineEdit(DialogLogin);
        lineEditServeur->setObjectName(QString::fromUtf8("lineEditServeur"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditServeur);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButtonConnexion = new QPushButton(DialogLogin);
        pushButtonConnexion->setObjectName(QString::fromUtf8("pushButtonConnexion"));
        pushButtonConnexion->setEnabled(false);

        horizontalLayout->addWidget(pushButtonConnexion);

        pushButtonCancel = new QPushButton(DialogLogin);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));

        horizontalLayout->addWidget(pushButtonCancel);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(lineEditLogin, lineEditPassword);
        QWidget::setTabOrder(lineEditPassword, pushButtonConnexion);
        QWidget::setTabOrder(pushButtonConnexion, pushButtonCancel);

        retranslateUi(DialogLogin);

        QMetaObject::connectSlotsByName(DialogLogin);
    } // setupUi

    void retranslateUi(QDialog *DialogLogin)
    {
        DialogLogin->setWindowTitle(QApplication::translate("DialogLogin", "Connection", 0, QApplication::UnicodeUTF8));
        labelLogin->setText(QApplication::translate("DialogLogin", "Login: ", 0, QApplication::UnicodeUTF8));
        labelPassword->setText(QApplication::translate("DialogLogin", "Password:", 0, QApplication::UnicodeUTF8));
        labelServeur->setText(QApplication::translate("DialogLogin", "Server:", 0, QApplication::UnicodeUTF8));
        pushButtonConnexion->setText(QApplication::translate("DialogLogin", "&Login", 0, QApplication::UnicodeUTF8));
        pushButtonCancel->setText(QApplication::translate("DialogLogin", "&Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogLogin: public Ui_DialogLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGLOGIN_H

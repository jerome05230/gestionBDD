/********************************************************************************
** Form generated from reading UI file 'dialoglogin.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGLOGIN_H
#define UI_DIALOGLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

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
            DialogLogin->setObjectName(QStringLiteral("DialogLogin"));
        DialogLogin->resize(209, 123);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icones/icones/gestionBDD.png"), QSize(), QIcon::Normal, QIcon::Off);
        DialogLogin->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(DialogLogin);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        labelLogin = new QLabel(DialogLogin);
        labelLogin->setObjectName(QStringLiteral("labelLogin"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelLogin);

        lineEditLogin = new QLineEdit(DialogLogin);
        lineEditLogin->setObjectName(QStringLiteral("lineEditLogin"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditLogin);

        labelPassword = new QLabel(DialogLogin);
        labelPassword->setObjectName(QStringLiteral("labelPassword"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelPassword);

        lineEditPassword = new QLineEdit(DialogLogin);
        lineEditPassword->setObjectName(QStringLiteral("lineEditPassword"));
        lineEditPassword->setEnabled(true);
        lineEditPassword->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditPassword);

        labelServeur = new QLabel(DialogLogin);
        labelServeur->setObjectName(QStringLiteral("labelServeur"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelServeur);

        lineEditServeur = new QLineEdit(DialogLogin);
        lineEditServeur->setObjectName(QStringLiteral("lineEditServeur"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditServeur);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButtonConnexion = new QPushButton(DialogLogin);
        pushButtonConnexion->setObjectName(QStringLiteral("pushButtonConnexion"));
        pushButtonConnexion->setEnabled(false);

        horizontalLayout->addWidget(pushButtonConnexion);

        pushButtonCancel = new QPushButton(DialogLogin);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));

        horizontalLayout->addWidget(pushButtonCancel);


        formLayout->setLayout(3, QFormLayout::SpanningRole, horizontalLayout);


        verticalLayout->addLayout(formLayout);

        QWidget::setTabOrder(lineEditLogin, lineEditPassword);
        QWidget::setTabOrder(lineEditPassword, pushButtonConnexion);
        QWidget::setTabOrder(pushButtonConnexion, pushButtonCancel);

        retranslateUi(DialogLogin);

        QMetaObject::connectSlotsByName(DialogLogin);
    } // setupUi

    void retranslateUi(QDialog *DialogLogin)
    {
        DialogLogin->setWindowTitle(QApplication::translate("DialogLogin", "Connection", 0));
        labelLogin->setText(QApplication::translate("DialogLogin", "Login: ", 0));
        labelPassword->setText(QApplication::translate("DialogLogin", "Password:", 0));
        labelServeur->setText(QApplication::translate("DialogLogin", "Server:", 0));
        lineEditServeur->setText(QApplication::translate("DialogLogin", "localhost", 0));
        pushButtonConnexion->setText(QApplication::translate("DialogLogin", "&Login", 0));
        pushButtonCancel->setText(QApplication::translate("DialogLogin", "&Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogLogin: public Ui_DialogLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGLOGIN_H

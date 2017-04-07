#include "dialogabout.h"
#include "ui_dialogabout.h"
#include <QDebug>

DialogAbout::DialogAbout(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAbout)
{
    qDebug() << "DialogAbout::DialogAbout(QWidget *parent)";
    ui->setupUi(this);
}

qDebug() << "DialogAbout::~DialogAbout()";
DialogAbout::~DialogAbout()
{
    delete ui;
}

void DialogAbout::on_buttonBox_accepted()
{
   qDebug() << "void DialogAbout::on_buttonBox_accepted()";
   close();
}

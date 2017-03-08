#include "mainwindow.h"
#include "dialoglogin.h"
#include <QApplication>
#include <QLibraryInfo>
#include <QTranslator>
#include <QSqlDatabase>
#include <QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTranslator qtTranslator;
    qtTranslator.load("qt_" + QLocale::system().name(),QLibraryInfo::location(QLibraryInfo::TranslationsPath));
    a.installTranslator(&qtTranslator);
    QTranslator myappTranslator;
    QString nomFichier="gestionBDD_" + QLocale::system().name()+".qm";
    qDebug()<<nomFichier;
    QString baseName;
    //defining paths to translations
#ifdef Q_OS_LINUX
    baseName="/usr/share/applications/gestionBDD/translations/";
#endif
#ifdef Q_OS_MACOS
    baseName=QApplication::applicationDirPath()+QLatin1String("/../Resources/translations/"); // path defaults to app dir.
#endif
#ifdef Q_OS_DARWIN
    baseName=QApplication::applicationDirPath()+QLatin1String("/translations/"); // path defaults to app dir.
#endif
#ifdef Q_OS_WIN
    baseName=QApplication::applicationDirPath();
#endif
    myappTranslator.load(baseName+nomFichier);
    //myappTranslator.load("/usr/share/applications/gestionBDD/translations/gestionnBDD_" + QLocale::system().name()+".qm");
    a.installTranslator(&myappTranslator);
    qDebug()<<QLibraryInfo::location(QLibraryInfo::TranslationsPath);
    QSqlDatabase dataBase=QSqlDatabase::addDatabase("QMYSQL");
    DialogLogin FormLogin;
    if (FormLogin.exec() ==QDialog::Accepted)
    {
        MainWindow w;
        w.show();
        return a.exec();
    }
    else
    {
        qDebug() << "erreur de connexion à la base de donnée" << endl;
        return -125;
    }
}



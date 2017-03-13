#ifndef DIALOGLOGIN_H
#define DIALOGLOGIN_H

#include <QDialog>

namespace Ui {
class DialogLogin;
}

class DialogLogin : public QDialog
{
    Q_OBJECT

public:
    explicit DialogLogin(QWidget *parent = 0);
    ~DialogLogin();

    void activatedConnexionButton();
    QString getLogin();
    QString getPassword();
private slots:
    void on_lineEditLogin_textChanged();
    void on_lineEditPassword_textChanged();
    void on_pushButtonConnexion_clicked();
    void on_pushButtonCancel_clicked();

private:
    Ui::DialogLogin *ui;
};

#endif // DIALOGLOGIN_H

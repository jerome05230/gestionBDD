#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void chargerBDD();
private slots:

    void on_comboBoxBase_currentIndexChanged(const QString arg1);
    void on_listWidgetTables_currentRowChanged();
    void on_textEditRequete_textChanged();
    void on_pushButtonError_clicked();
    void on_pushButtonEnregistrer_clicked();
    void on_listWidgetHistorique_itemClicked();
    void on_pushButtonClear_clicked();
    void on_pushButtonSupprimer_clicked();

    void on_pushButtonSauvegarder_clicked();

    void on_pushButtonOuvrir_clicked();

    void on_actionLeave_triggered();

    void on_pushButtonExporter_clicked();

    void on_actionAbout_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

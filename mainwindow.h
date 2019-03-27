#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QMessageBox>
#include"queue.h"
#include <QMainWindow>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    QString text;
    Queue<double> my_list;
    ~MainWindow();
private slots:
    void on_lineEdit_editingFinished();
//    void on_lineEdit_2_editingFinished();
    void on_chek_edit_editingFinished();
    void on_add_button_clicked();
    void on_multi_button_clicked();
    void on_check_button_clicked();
    void on_delete_button_clicked();
//    void on_out_elements_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

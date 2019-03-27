#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>
#include <QDoubleValidator>
#pragma once
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit->setValidator(new QDoubleValidator(ui->lineEdit));
    ui->chek_edit->setValidator(new QDoubleValidator(ui->chek_edit));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_lineEdit_editingFinished()
{
//    my_list.Add(ui->lineEdit->text().toDouble());
}

void MainWindow::on_chek_edit_editingFinished()
{
//    my_list.Search(ui->chek_edit->text().toDouble());
}

void MainWindow::on_add_button_clicked()
{
    my_list.Add(ui->lineEdit->text().toDouble());
    ui->view_all_elements->setPlainText(my_list.Show());
    ui->lineEdit->clear();
}


void MainWindow::on_multi_button_clicked()
{
    my_list.my_multiplication();
}

void MainWindow::on_check_button_clicked()
{
    my_list.Search(ui->chek_edit->text().toDouble());
    ui->chek_edit->clear();
}

void MainWindow::on_delete_button_clicked()
{
    my_list.del();
    ui->view_all_elements->setPlainText(my_list.Show());
    ui->lineEdit->clear();
}



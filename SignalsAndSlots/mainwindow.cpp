#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include "dialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    ui->progressBar->setValue(value);
}


void MainWindow::on_pushButton_clicked()
{
    Dialog *dialog = new Dialog(this);

    dialog->exec();
}


#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cstdlib>
#include <ctime>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    srand(time(NULL));

    random = (rand() % 10) + 1;
    qDebug() << "Random Number Genrated: " << QString::number(random);

    ui->startOverButton->setDisabled(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_guessButton_clicked()
{
    guess = ui->spinBox->value();
    qDebug() << "Guess is: " << QString::number(guess);

    if(guess == random)
    {
        //congrats;
        ui->messageLabel->setText("Congrats you are right, the number is: " +QString::number(guess));

        ui->guessButton->setDisabled(true);
        ui->startOverButton->setDisabled(false);
    }
    else
    {
       if(random > guess)
       {
           //number is higher than that;
           ui->messageLabel->setText("number is higher than that");
       }
       else
       {
           //number is lower than that
           ui->messageLabel->setText("number is lower than that");
       }
    }
}


void MainWindow::on_startOverButton_clicked()
{

}


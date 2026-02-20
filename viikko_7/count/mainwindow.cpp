#include "mainwindow.h"
#include "./ui_mainwindow.h"

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




void MainWindow::on_countButton_clicked()
{
    //1. luetaan nykyinen luku
    QString luku= ui->countEdit->text();
    qDebug()<<"Nykyinen luku merkkijonona"<<luku;
    //2.muistetaan merkkijono kokonaisluvuksi
    int num=luku.toInt();
    qDebug()<<"Nykyinen luku kokonaislukuna"<<num;
    //3.lisataan lukuun 1
    num+=1;
    qDebug()<<"Uusi luku kokonaislukuna"<<num;
    //4. Kirjoitetaan takaisin edittiin
    QString txt=QString::number(num);
    ui->countEdit->setText(txt);
}


void MainWindow::on_resetButton_clicked()
{
    QString txt="0";
    ui->countEdit->setText(txt);
}


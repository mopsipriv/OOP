#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug()<<"Alkutila";
    setActiveControls();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_plusButton_clicked()
{
    if(tila==2){

        //haetaan num1
        QString n1=ui->num1Edit->text();
        num1=n1.toInt();
        //haetaan num2
        QString n2=ui->num2Edit->text();
        num2=n2.toInt();
        //lasketaan
        qDebug()<<num1<<" + "<<num2;

        result=num1+num2;
        //kirjoitetaan tulos
        QString r=QString::number(result);
        ui->resultEdit->setText(r);
        //palataan alkutilaan

        tila=0;
        qDebug() << "Nykyinen tila: " << tila;
        setActiveControls();
    }
}


void MainWindow::on_minusButton_clicked()
{
    if(tila==2){

        //haetaan num1
        QString n1=ui->num1Edit->text();
        num1=n1.toInt();
        //haetaan num2
        QString n2=ui->num2Edit->text();
        num2=n2.toInt();
        //lasketaan
        qDebug()<<num1<<" - "<<num2;

        result=num1-num2;
        //kirjoitetaan tulos
        QString r=QString::number(result);
        ui->resultEdit->setText(r);

        tila=0;
        qDebug() << "Nykyinen tila: " << tila;
        setActiveControls();
    }
}

void MainWindow::on_multiplicationButton_clicked()
{
    if(tila==2){

        //haetaan num1
        QString n1=ui->num1Edit->text();
        num1=n1.toInt();
        //haetaan num2
        QString n2=ui->num2Edit->text();
        num2=n2.toInt();
        //lasketaan
        qDebug()<<num1<<" * "<<num2;

        result=num1*num2;
        //kirjoitetaan tulos
        QString r=QString::number(result);
        ui->resultEdit->setText(r);
        //palataan alkutilaan
        tila=0;
        qDebug() << "Nykyinen tila: " << tila;
        setActiveControls();
    }
}


void MainWindow::on_divideButton_clicked()
{
    if(tila==2){

        qDebug()<<"Tila"<<tila<<" plus sallittu";
        //haetaan num1
        QString n1=ui->num1Edit->text();
        num1=n1.toInt();
        //haetaan num2
        QString n2=ui->num2Edit->text();
        num2=n2.toInt();
        //lasketaan
        qDebug()<<num1<<" / "<<num2;

        result=num1/num2;
        //kirjoitetaan tulos
        QString r=QString::number(result);
        ui->resultEdit->setText(r);
        //palataan alkutilaan
        tila=0;
        qDebug() << "Nykyinen tila: " << tila;
        setActiveControls();
    }
}


void MainWindow::setActiveControls()
{
    if (tila == 0)
    {
        ui->plusButton->setEnabled(false);
        ui->minusButton->setEnabled(false);
        ui->multiplicationButton->setEnabled(false);
        ui->divideButton->setEnabled(false);
        ui->N1Button->setEnabled(true);
        ui->N2Button->setEnabled(true);
        ui->N3Button->setEnabled(true);
        ui->N4Button->setEnabled(true);
        ui->N5Button->setEnabled(true);
        ui->N6Button->setEnabled(true);
        ui->N7Button->setEnabled(true);
        ui->N8Button->setEnabled(true);
        ui->N9Button->setEnabled(true);
        ui->N0Button->setEnabled(true);
    }
    else if (tila == 1)
    {
        ui->plusButton->setEnabled(false);
        ui->minusButton->setEnabled(false);
        ui->multiplicationButton->setEnabled(false);
        ui->divideButton->setEnabled(false);
        ui->N1Button->setEnabled(true);
        ui->N2Button->setEnabled(true);
        ui->N3Button->setEnabled(true);
        ui->N4Button->setEnabled(true);
        ui->N5Button->setEnabled(true);
        ui->N6Button->setEnabled(true);
        ui->N7Button->setEnabled(true);
        ui->N8Button->setEnabled(true);
        ui->N9Button->setEnabled(true);
        ui->N0Button->setEnabled(true);
    }
    else if (tila == 2)
    {
        ui->plusButton->setEnabled(true);
        ui->minusButton->setEnabled(true);
        ui->multiplicationButton->setEnabled(true);
        ui->divideButton->setEnabled(true);
        ui->N1Button->setEnabled(false);
        ui->N2Button->setEnabled(false);
        ui->N3Button->setEnabled(false);
        ui->N4Button->setEnabled(false);
        ui->N5Button->setEnabled(false);
        ui->N6Button->setEnabled(false);
        ui->N7Button->setEnabled(false);
        ui->N8Button->setEnabled(false);
        ui->N9Button->setEnabled(false);
        ui->N0Button->setEnabled(false);
    }
}


void MainWindow::on_N1Button_clicked()
{
    setEditNum(1);

}

void MainWindow::on_N2Button_clicked()
{
    setEditNum(2);
}


void MainWindow::on_N3Button_clicked()
{
    setEditNum(3);
}

void MainWindow::on_N4Button_clicked()
{
    setEditNum(4);
}


void MainWindow::on_N5Button_clicked()
{
    setEditNum(5);
}


void MainWindow::on_N6Button_clicked()
{
    setEditNum(6);
}


void MainWindow::on_N7Button_clicked()
{
    setEditNum(7);
}


void MainWindow::on_N8Button_clicked()
{
    setEditNum(8);
}


void MainWindow::on_N9Button_clicked()
{
    setEditNum(9);
}

void MainWindow::on_N0Button_clicked()
{
    setEditNum(0);
}


void MainWindow::on_enterButton_clicked()
{
    qDebug()<<"Nykyinen tila"<<tila;
    //tilasta 0->tilaan 1
    if(tila==0){
        tila=1;
    }else if(tila==1){
        tila=2;
    }
    qDebug()<<"Uusi tila"<<tila;
    setActiveControls();
}

void MainWindow::setEditNum(int num){
    QString lukunyt;
    if(tila==0){
        //tila 0:kirjotetaan num1
        qDebug()<<"tila0:kirjoitetaan num1";
        QString lukunyt=ui->num1Edit->text();
        lukunyt+=QString::number(num);
        ui->num1Edit->setText(lukunyt);

    }else if(tila==1){
        //tila 1:kirjotetaan num2
        qDebug()<<"tila1:kirjoitetaan num2"<<num;
        QString lukunyt=ui->num2Edit->text();
        lukunyt+=QString::number(num);
        ui->num2Edit->setText(lukunyt);

    }else{
        qDebug()<<"vaara tila";
    }
}

void MainWindow::on_clearButton_clicked()
{
    ui->num1Edit->clear();
    ui->num2Edit->clear();
    ui->resultEdit->clear();

    tila=0;
    setActiveControls();
    qDebug()<<"Clearissa palataan tilaan"<<tila;
}

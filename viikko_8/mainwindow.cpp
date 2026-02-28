#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pQTimer=new QTimer(this);
    connect(pQTimer,&QTimer::timeout, this,&MainWindow::timeout);
    player1Time=0;
    player2Time=0;
    setGameInfoText("Select playtime and press start game!",20);
    updateProgressBar();
}

void MainWindow::updateProgressBar(){
    if(gameTime>0){
        int player1=(player1Time*100)/gameTime;
        int player2=(player2Time*100)/gameTime;
        ui->progressBar1->setValue(player1);
        ui->progressBar2->setValue(player2);
    }
    else{
        ui->progressBar1->setValue(0);
        ui->progressBar2->setValue(0);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_sec120Button_clicked()
{
    gameTime=120;
    player1Time=gameTime;
    player2Time=gameTime;

    updateProgressBar();
    setGameInfoText("Ready to play",20);
}

void MainWindow::on_min5Button_clicked()
{
    gameTime=300;
    player1Time=gameTime;
    player2Time=gameTime;

    updateProgressBar();
    setGameInfoText("Ready to play",20);

}

void MainWindow::setGameInfoText(QString text, short fontSize) {
    ui->label->setText(text);
    QFont font = ui->label->font();
    font.setPointSize(20);
    ui->label->setFont(font);
}

void MainWindow::timeout(){
    if(currentPlayer==1){
        player1Time--;
    }
    else if(currentPlayer==2){
        player2Time--;
    }
    updateProgressBar();
    if(player1Time<=0){
        pQTimer->stop();
        setGameInfoText("Player 2 Won",20);
    }
    if(player2Time<=0){
        pQTimer->stop();
        setGameInfoText("Player 1 Won",20);
    }
}

void MainWindow::on_switchplayer1Button_clicked()
{
    if(currentPlayer==1){
        currentPlayer=2;
    }
}


void MainWindow::on_switchplayer2Button_clicked()
{
    if(currentPlayer==2){
        currentPlayer=1;
    }
}


void MainWindow::on_startgameButton_clicked()
{
    if(gameTime==0)return;
    currentPlayer=1;
    pQTimer->start(1000);
    setGameInfoText("Game ongoing",20);
}


void MainWindow::on_stopgameButton_clicked()
{
    pQTimer->stop();
    gameTime=0;
    updateProgressBar();
    setGameInfoText("New game via start button",20);
}


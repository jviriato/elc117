#include "qsorteio.h"
#include "ui_qsorteio.h"
#include <string>
#include <algorithm>
#include <random>
#include <iostream>
#include <chrono>

QSorteio::QSorteio(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QSorteio)
{
    ui->setupUi(this);
    cont_OK = 0;
    QPixmap pix("img.jpeg");
    ui->label_2->setPixmap(pix);
}

QSorteio::~QSorteio()
{
    delete ui;
}

void QSorteio::on_pushButton_clicked()
{
    QString static numero;
    if(cont_OK == 0){
        ui->sorteados->setHidden(0);
        ui->lineEdit->setDisabled(1);
        ui->label->setDisabled(1);
        qDebug("%d ", cont_OK);
        numero = ui->lineEdit->text();
        p = criaArray(numero.toInt());
        shuffleArray(p);
    }
    cont_OK++;
    mostraGanhador(p);
}

void QSorteio::on_lineEdit_textChanged(const QString &arg1)
{
    for(int i = 0; i < arg1.size(); i++)
        validaTexto(arg1, i);
}

void QSorteio::validaTexto(QString arg1, int i)
{
    if(arg1[i] > QLatin1Char('9'))
        ui->lineEdit->backspace();
    if(arg1[i] < QLatin1Char('0'))
        ui->lineEdit->backspace();
}

std::vector<int> QSorteio::criaArray(int participantes)
{
    std::vector<int> p;
    for(int i = 1; i <= participantes; i++)
        p.push_back(i);
    return p;
}

void QSorteio::shuffleArray(std::vector<int>& p)
{
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    shuffle (p.begin(), p.end(), std::default_random_engine(seed));
}

void QSorteio::escreveTexto(QString numero)
{
    ui->SORTEADO->setText(QStringLiteral("<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; font-weight:600;\">%1</span></p></body></html>").arg(numero));
    ui->sorteados->setText(QStringLiteral("<center>%1° Ganhador</center>").arg(cont_OK));
}

void QSorteio::mostraGanhador(std::vector<int>& p)
{
    if(p.size() == 0){
        escreveTexto("ARRAY VAZIA");
        reset();
    }
    else{
        QString num;
        num.setNum(p.front());
        escreveTexto(num);
        p.erase(p.begin());
    }
}

void QSorteio::reset()
{
    cont_OK = 0;
    ui->lineEdit->clear();
    p.clear();
    ui->sorteados->setHidden(1);
    ui->lineEdit->setDisabled(0);
    ui->label->setDisabled(0);

}

void QSorteio::on_RESET_clicked()
{
    reset();
    escreveTexto("RESET");
}

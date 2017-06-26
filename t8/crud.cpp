#include "crud.h"
#include "ui_crud.h"
#include <QFileDialog>
#include <QTextStream>
#include <QDebug>
CRUD::CRUD(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CRUD)
{
    ui->setupUi(this);
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(2);
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
}

CRUD::~CRUD()
{
    delete ui;
}


void CRUD::on_botaoAdd_clicked()
{
    static int i = 0;
    static int j = 0;
    if(ui->linhaID->text() != NULL && ui->linhaLabel->text() != NULL){
        ui->tableWidget->setRowCount(i+1);
        ui->tableWidget->setItem(i,j, new QTableWidgetItem(ui->linhaID->text()));
        j++;
        ui->tableWidget->setItem(i,j, new QTableWidgetItem(ui->linhaLabel->text()));
        i++;
        j--;
    }
    //qDebug("A string: %s", qPrintable(ui->linhaID->text()));

}

void CRUD::on_botaoRemove_clicked()
{
    ui->tableWidget->removeRow(ui->tableWidget->currentRow());
}

void CRUD::on_botaoExport_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this,
        tr("Save Address Book"), "",
        tr("Address Book (*.abk);;All Files (*)"));
}

void CRUD::on_botaoImport_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,
        tr("Open CSV"), "",
        tr("csv (*.csv);;All Files (*)"));
    if (fileName.isEmpty())
        return;

    QFile file(fileName);
       if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
           return;

    QStringList linhas;
    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        linhas.append(line.split(','));
    }
    qDebug() << linhas;
}

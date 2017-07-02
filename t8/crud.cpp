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
    r = 0;
    c = 0;
}

CRUD::~CRUD()
{
    delete ui;
}


void CRUD::on_botaoAdd_clicked()
{
    /*1*/
    if(ui->linhaID->text() != NULL && ui->linhaLabel->text() != NULL){
        ui->tableWidget->setRowCount(r+1);
        ui->tableWidget->setItem(r,c, new QTableWidgetItem(ui->linhaID->text()));
        c = 1;
        ui->tableWidget->setItem(r,c, new QTableWidgetItem(ui->linhaLabel->text()));
        r++;
        c = 0;
    }

}

void CRUD::on_botaoRemove_clicked()
{
    ui->tableWidget->removeRow(ui->tableWidget->currentRow());
    if(r > 0) r--;
}

void CRUD::on_botaoExport_clicked()
{
    /*1*/
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"),
                               "",
                               tr("CSV (*.csv)"));

    QFile f(fileName);
    //save data
    QAbstractItemModel* model = ui->tableWidget->model();   //parte interessante
    QModelIndex idx = model->index(0, 0);

    if ( f.open(QIODevice::WriteOnly | QIODevice::Text) )
    {
        QTextStream stream( &f );
        int row = ui->tableWidget->rowCount();
        for(int i = 0; i < row; i++){
            idx = model->index(i, 0);
            QString str = model->data(idx).toString();
            stream << str << ", ";
            idx = model->index(i, 1);
            str = model->data(idx).toString();
            stream << str << endl;
        }
    }


    f.close();
}

void CRUD::on_botaoImport_clicked()
{

    /* 1 */
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
    //qDebug() << linhas;
    /* 2 */
    int i = 0;
    while (i < linhas.size() - 1){
        ui->tableWidget->setRowCount(r+1);
        ui->tableWidget->setItem(r,c, new QTableWidgetItem(linhas.at(i)));
        c = 1;
        i++;
        ui->tableWidget->setItem(r,c, new QTableWidgetItem(linhas.at(i)));
        r++;
        c = 0;
        i++;
    }
}

void CRUD::on_pushButton_6_clicked()
{
    QFile file("template.html");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QTextStream in(&file);


    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"),"", tr("HTML (*.html)"));

    QFile f(fileName);
    f.open(QIODevice::ReadWrite | QIODevice::Text);
    QTextStream stream(&f);
    /*while (!in.atEnd()) {
        QString line = in.readLine();
    }*/
    int count = 0;
    QString line;
    while(count < 7){
        line = in.readLine();
        stream << line << endl;
        count++;
    }
    QString titulo = ui->tituloEdit->text();
    stream << "<title>" << titulo << "</title>" << endl;
    while(count < 19){
        line = in.readLine();
        stream << line << endl;
        count++;
    }
    stream << "<h1>" << titulo << "</h1>" << endl;
    while(count < 33){
        line = in.readLine();
        stream << line << endl;
        count++;
    }
    int rows = ui->tableWidget->rowCount();
    QAbstractItemModel* model = ui->tableWidget->model();
    QModelIndex idx = model->index(0, 0);
    for(int i = 0; i < rows; i++){
        idx = model->index(i, 0);
        QString ID = model->data(idx).toString();
        idx = model->index(i, 1);
        QString LABEL = model->data(idx).toString();
        stream << "<div class=\"form-group\">" << endl;
        QString uno = "<label for=\"" + ID + "\" class=\"col-sm-2 control-label\">"+LABEL+"\"</label>";
        stream << uno << endl;
        stream << "<div class=\"col-sm-6\">"  << endl;
        QString dos = "<input type=\"text\" class=\"form-control validate[required]\" id=\""+ID+"\">";
        stream << dos << endl << "</div>" << endl << "</div>" << endl;
    }
    while(count < 85){
        line = in.readLine();
        stream << line << endl;
        count++;
    }
    //		dataSet[seq]=[index, icons, object.stationId, object.price, object.fuelType];
    stream << "dataSet[seq]=[index, icons";
    for(int i = 0; i < rows; i++){
        idx = model->index(i, 0);
        QString ID = model->data(idx).toString();
        stream << ", object."+ID;
    }
    stream << "];" << endl;
    while(count < 97){
        line = in.readLine();
        stream << line << endl;
        count++;
    }
    for(int i = 0; i < rows; i++){
        idx = model->index(i, 1);
        QString LABEL = model->data(idx).toString();
        stream << "{ \"title\": \""+LABEL+"\" }," << endl;
    }
    while(count < 129){
        line = in.readLine();
        stream << line << endl;
        count++;
    }
    //		    $('#stationId').val(rows[2].innerHTML);
    for(int i = 0; i < rows; i++){
        idx = model->index(i, 0);
        QString ID = model->data(idx).toString();
        stream << "$('#"+ID+"').val(rows["+ QString::number(i+2) +"].innerHTML);" << endl;
    }
    while(count < 145){
        line = in.readLine();
        stream << line << endl;
        count++;
    }
    //"price": $("#price").val(),
    for(int i = 0; i < rows; i++){
        idx = model->index(i, 0);
        QString ID = model->data(idx).toString();
        stream << "\""+ID+"\": $(\"#"+ID+"\").val()," << endl;
    }
    while(!in.atEnd()){
        line = in.readLine();
        stream << line << endl;
        count++;
    }
}

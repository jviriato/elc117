#ifndef CRUD_H
#define CRUD_H

#include <QMainWindow>

namespace Ui {
class CRUD;
}

class CRUD : public QMainWindow
{
    Q_OBJECT

public:
    int c,r;
    explicit CRUD(QWidget *parent = 0);
    ~CRUD();

private slots:
    void on_botaoAdd_clicked();

    void on_botaoRemove_clicked();

    void on_botaoExport_clicked();

    void on_botaoImport_clicked();

private:
    Ui::CRUD *ui;
};

#endif // CRUD_H

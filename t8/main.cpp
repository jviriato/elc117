#include "crud.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CRUD w;
    w.show();

    return a.exec();
}

#ifndef QSORTEIO_H
#define QSORTEIO_H

#include <QMainWindow>

namespace Ui {
class QSorteio;
}

class QSorteio : public QMainWindow
{
    Q_OBJECT

public:
    explicit QSorteio(QWidget *parent = 0);
    ~QSorteio();

private slots:
    void on_pushButton_clicked();

    void on_lineEdit_textChanged(const QString &arg1);
    void validaTexto(QString arg1, int i);
    std::vector<int> criaArray(int participantes);
    void shuffleArray(std::vector<int>& p);
    void escreveTexto(QString numero);
    void mostraGanhador(std::vector<int>& p);
    void on_RESET_clicked();
    void reset();
private:
    Ui::QSorteio *ui;
    int cont_OK;
    std::vector<int> p;
};

#endif // QSORTEIO_H

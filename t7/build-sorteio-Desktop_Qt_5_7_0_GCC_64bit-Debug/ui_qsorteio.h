/********************************************************************************
** Form generated from reading UI file 'qsorteio.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSORTEIO_H
#define UI_QSORTEIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QSorteio
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *sorteados;
    QLabel *SORTEADO;
    QPushButton *RESET;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QSorteio)
    {
        if (QSorteio->objectName().isEmpty())
            QSorteio->setObjectName(QStringLiteral("QSorteio"));
        QSorteio->resize(369, 392);
        centralWidget = new QWidget(QSorteio);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setAutoDefault(true);

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        sorteados = new QLabel(centralWidget);
        sorteados->setObjectName(QStringLiteral("sorteados"));

        verticalLayout->addWidget(sorteados);

        SORTEADO = new QLabel(centralWidget);
        SORTEADO->setObjectName(QStringLiteral("SORTEADO"));

        verticalLayout->addWidget(SORTEADO);

        RESET = new QPushButton(centralWidget);
        RESET->setObjectName(QStringLiteral("RESET"));

        verticalLayout->addWidget(RESET);

        QSorteio->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(QSorteio);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QSorteio->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QSorteio);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QSorteio->setStatusBar(statusBar);

        retranslateUi(QSorteio);

        pushButton->setDefault(true);


        QMetaObject::connectSlotsByName(QSorteio);
    } // setupUi

    void retranslateUi(QMainWindow *QSorteio)
    {
        QSorteio->setWindowTitle(QApplication::translate("QSorteio", "QSorteio", 0));
        label_2->setText(QString());
        label->setText(QApplication::translate("QSorteio", "Participantes", 0));
        pushButton->setText(QApplication::translate("QSorteio", "Sortear", 0));
        sorteados->setText(QString());
        SORTEADO->setText(QApplication::translate("QSorteio", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; font-weight:600;\">SORT</span></p></body></html>", 0));
        RESET->setText(QApplication::translate("QSorteio", "Reset", 0));
    } // retranslateUi

};

namespace Ui {
    class QSorteio: public Ui_QSorteio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSORTEIO_H

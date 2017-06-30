/********************************************************************************
** Form generated from reading UI file 'crud.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRUD_H
#define UI_CRUD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CRUD
{
public:
    QWidget *centralWidget;
    QPushButton *botaoRemove;
    QPushButton *botaoAdd;
    QTableWidget *tableWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *botaoImport;
    QPushButton *pushButton_6;
    QPushButton *botaoExport;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *linhaLabel;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *linhaID;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_3;
    QLabel *titulo;
    QLineEdit *linhaTitulo;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CRUD)
    {
        if (CRUD->objectName().isEmpty())
            CRUD->setObjectName(QStringLiteral("CRUD"));
        CRUD->resize(406, 486);
        centralWidget = new QWidget(CRUD);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        botaoRemove = new QPushButton(centralWidget);
        botaoRemove->setObjectName(QStringLiteral("botaoRemove"));
        botaoRemove->setGeometry(QRect(240, 120, 80, 22));
        botaoAdd = new QPushButton(centralWidget);
        botaoAdd->setObjectName(QStringLiteral("botaoAdd"));
        botaoAdd->setGeometry(QRect(242, 86, 80, 22));
        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(64, 159, 256, 192));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(52, 386, 263, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        botaoImport = new QPushButton(layoutWidget);
        botaoImport->setObjectName(QStringLiteral("botaoImport"));

        horizontalLayout->addWidget(botaoImport);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        horizontalLayout->addWidget(pushButton_6);

        botaoExport = new QPushButton(layoutWidget);
        botaoExport->setObjectName(QStringLiteral("botaoExport"));

        horizontalLayout->addWidget(botaoExport);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(64, 109, 127, 44));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        linhaLabel = new QLineEdit(layoutWidget1);
        linhaLabel->setObjectName(QStringLiteral("linhaLabel"));

        verticalLayout_2->addWidget(linhaLabel);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(64, 59, 127, 44));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget2);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        linhaID = new QLineEdit(layoutWidget2);
        linhaID->setObjectName(QStringLiteral("linhaID"));

        verticalLayout->addWidget(linhaID);

        layoutWidget3 = new QWidget(centralWidget);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(60, 10, 127, 44));
        verticalLayout_3 = new QVBoxLayout(layoutWidget3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        titulo = new QLabel(layoutWidget3);
        titulo->setObjectName(QStringLiteral("titulo"));

        verticalLayout_3->addWidget(titulo);

        linhaTitulo = new QLineEdit(layoutWidget3);
        linhaTitulo->setObjectName(QStringLiteral("linhaTitulo"));

        verticalLayout_3->addWidget(linhaTitulo);

        CRUD->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(CRUD);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        CRUD->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CRUD);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        CRUD->setStatusBar(statusBar);

        retranslateUi(CRUD);

        QMetaObject::connectSlotsByName(CRUD);
    } // setupUi

    void retranslateUi(QMainWindow *CRUD)
    {
        CRUD->setWindowTitle(QApplication::translate("CRUD", "CRUD", 0));
        botaoRemove->setText(QApplication::translate("CRUD", "Remove", 0));
        botaoAdd->setText(QApplication::translate("CRUD", "Add", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("CRUD", "Id", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("CRUD", "Label", 0));
        botaoImport->setText(QApplication::translate("CRUD", "Import", 0));
        pushButton_6->setText(QApplication::translate("CRUD", "Generate File", 0));
        botaoExport->setText(QApplication::translate("CRUD", "Export", 0));
        label_2->setText(QApplication::translate("CRUD", "ID", 0));
        label->setText(QApplication::translate("CRUD", "Label", 0));
        titulo->setText(QApplication::translate("CRUD", "T\303\255tulo", 0));
    } // retranslateUi

};

namespace Ui {
    class CRUD: public Ui_CRUD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRUD_H

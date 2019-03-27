/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *add_button;
    QPushButton *delete_button;
    QPushButton *multi_button;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *chek_edit;
    QPushButton *check_button;
    QLabel *show_label;
    QPlainTextEdit *view_all_elements;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(640, 482);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        add_button = new QPushButton(centralWidget);
        add_button->setObjectName(QStringLiteral("add_button"));

        verticalLayout->addWidget(add_button);

        delete_button = new QPushButton(centralWidget);
        delete_button->setObjectName(QStringLiteral("delete_button"));

        verticalLayout->addWidget(delete_button);

        multi_button = new QPushButton(centralWidget);
        multi_button->setObjectName(QStringLiteral("multi_button"));

        verticalLayout->addWidget(multi_button);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        chek_edit = new QLineEdit(centralWidget);
        chek_edit->setObjectName(QStringLiteral("chek_edit"));

        verticalLayout_2->addWidget(chek_edit);

        check_button = new QPushButton(centralWidget);
        check_button->setObjectName(QStringLiteral("check_button"));

        verticalLayout_2->addWidget(check_button);

        show_label = new QLabel(centralWidget);
        show_label->setObjectName(QStringLiteral("show_label"));

        verticalLayout_2->addWidget(show_label);

        view_all_elements = new QPlainTextEdit(centralWidget);
        view_all_elements->setObjectName(QStringLiteral("view_all_elements"));
        view_all_elements->setReadOnly(true);

        verticalLayout_2->addWidget(view_all_elements);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalLayout->setStretch(1, 1);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 640, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\207\320\270\321\201\320\273\320\276 \321\201\321\216\320\264\320\260:", 0));
        add_button->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0));
        delete_button->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", 0));
        multi_button->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\276\320\270\320\267\320\262\320\265\320\264\320\265\320\275\320\270\320\265 \320\274\320\265\320\266\320\264\321\203 min \320\270 max:", 0));
        label_2->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\276\320\262\320\265\321\200\320\270\321\202\321\214 \320\275\320\260\320\273\320\270\321\207\320\270\320\265 \321\207\320\270\321\201\320\273\320\260 \320\262 \320\276\321\207\320\265\321\200\320\265\320\264\320\270:", 0));
        check_button->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\276\320\262\320\265\321\200\320\270\321\202\321\214 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", 0));
        show_label->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\262\320\276\320\264 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\276\320\262 \320\276\321\207\320\265\321\200\320\265\320\264\320\270:", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

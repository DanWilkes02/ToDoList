/********************************************************************************
** Form generated from reading UI file 'todolist.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TODOLIST_H
#define UI_TODOLIST_H

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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ToDoList
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QToolButton *toolButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QToolBar *toolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ToDoList)
    {
        if (ToDoList->objectName().isEmpty())
            ToDoList->setObjectName(QStringLiteral("ToDoList"));
        ToDoList->resize(666, 324);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ToDoList->sizePolicy().hasHeightForWidth());
        ToDoList->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(ToDoList);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(260, 10, 59, 16));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(170, 210, 160, 24));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        toolButton = new QToolButton(widget);
        toolButton->setObjectName(QStringLiteral("toolButton"));

        horizontalLayout->addWidget(toolButton);

        ToDoList->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ToDoList);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 666, 22));
        ToDoList->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ToDoList);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ToDoList->addToolBar(Qt::TopToolBarArea, mainToolBar);
        toolBar = new QToolBar(ToDoList);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        ToDoList->addToolBar(Qt::TopToolBarArea, toolBar);
        statusBar = new QStatusBar(ToDoList);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ToDoList->setStatusBar(statusBar);

        retranslateUi(ToDoList);

        QMetaObject::connectSlotsByName(ToDoList);
    } // setupUi

    void retranslateUi(QMainWindow *ToDoList)
    {
        ToDoList->setWindowTitle(QApplication::translate("ToDoList", "ToDoList", 0));
        label->setText(QApplication::translate("ToDoList", "ToDo!", 0));
        toolButton->setText(QApplication::translate("ToDoList", "+", 0));
        toolBar->setWindowTitle(QApplication::translate("ToDoList", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class ToDoList: public Ui_ToDoList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TODOLIST_H

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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ToDoList
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit;
    QToolButton *toolButton;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *showButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QToolBar *toolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ToDoList)
    {
        if (ToDoList->objectName().isEmpty())
            ToDoList->setObjectName(QStringLiteral("ToDoList"));
        ToDoList->resize(674, 404);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ToDoList->sizePolicy().hasHeightForWidth());
        ToDoList->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(ToDoList);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(311, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 2);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(260, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 1, 3);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 2, 1, 1, 2);

        toolButton = new QToolButton(centralWidget);
        toolButton->setObjectName(QStringLiteral("toolButton"));

        gridLayout->addWidget(toolButton, 2, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 250, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(263, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(149, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 2, 4, 1, 1);

        showButton = new QPushButton(centralWidget);
        showButton->setObjectName(QStringLiteral("showButton"));

        gridLayout->addWidget(showButton, 2, 5, 1, 1);

        ToDoList->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ToDoList);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 674, 22));
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
        showButton->setText(QApplication::translate("ToDoList", "Show", 0));
        toolBar->setWindowTitle(QApplication::translate("ToDoList", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class ToDoList: public Ui_ToDoList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TODOLIST_H

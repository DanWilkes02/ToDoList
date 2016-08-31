#include "todolist.h"
#include "ui_todolist.h"
#include<cstdlib>
#include<QMessageBox>
#include<QDebug>
#include<todoveiw.h>


ToDoList::ToDoList(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ToDoList)
{
    ui->setupUi(this);

}

ToDoList::~ToDoList()
{
    delete ui;
}



void ToDoList::on_toolButton_clicked() //On the 'add' button click
{
    QString text = ui->lineEdit->text();
    TodoVeiw* tdV = new TodoVeiw(text, max, centralWidget());
    connect(tdV, SIGNAL(selectedIndex(int)), this, SLOT(delTodo(int)));


    ui->verticalLayout->addWidget(tdV);
    todoVeiw.push_back(tdV);
    ++max;

}


void ToDoList::delTodo(int i){
    delete todoVeiw.at(i);
    --max;
}


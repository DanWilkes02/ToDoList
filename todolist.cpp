#include "todolist.h"
#include "ui_todolist.h"

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

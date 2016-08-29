#include "todolist.h"
#include "ui_todolist.h"
#include<cstdlib>
#include<QMessageBox>


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

   QLabel *frame = new QLabel(this);
   frame->setText(ui->lineEdit->text());
   ui->verticalLayout->addWidget(frame);


    //Remove text from the lineEdit
    ui->lineEdit->clear();

}





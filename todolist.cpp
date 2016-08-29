#include "todolist.h"
#include "ui_todolist.h"
#include<cstdlib>
#include<QMessageBox>

//The current array index for lineEdit to write to
int arrIndex = 0;


//The array to hold ToDo's in
QString toDos[100];

/*void arr();

void arr(){
    //Initialises all array indexes to "null"
    for(int i=0; i<=100; i++){
        toDos[i] = "null";
     }

}*/



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



    //Uses the lineEdit data as plain text to be used as a new ToDo
    toDos[arrIndex] = ui->lineEdit->text();

    //Remove text from the lineEdit
    ui->lineEdit->clear();

    ++arrIndex;
}


void ToDoList::on_showButton_clicked()
{
    for(int i=0;i<=100;i++){
        if(toDos[i]!=""){
            QMessageBox::information(this, tr("TO DO:"),toDos[i], QMessageBox::Ok );
        }else{
            return;
        }

    }



}



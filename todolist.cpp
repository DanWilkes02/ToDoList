#include "todolist.h"
#include "ui_todolist.h"
#include<cstdlib>
#include<QMessageBox>
#include<QDebug>

//Variable holding the amount of widgets that have been created
int widgetAmount = 0;

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
    //Maximum widgets user is allowed to add
    const int maxWidgets = 10;

   //Creates a read only LineEdit which the user will add
   QLineEdit *frame = new QLineEdit(this);
   frame->setText(ui->lineEdit->text());
   frame->setReadOnly(true);

    QToolButton *removeButton = new QToolButton;
    removeButton->setText("X");

    QHBoxLayout *toDoLayout = new QHBoxLayout;
    toDoLayout->addWidget(frame);
    toDoLayout->addWidget(removeButton);

   //Add a widget if there isn't already the maximum widget amount, to stop space filling up
   if(widgetAmount < maxWidgets){
      ui->verticalLayout->addLayout(toDoLayout);

        //Register one more widget
      ++widgetAmount;
      qDebug() << widgetAmount;
   }else{
        //Alert the user they have run out of room
        QMessageBox::warning(this, tr("Warning!"),tr("You have run out of space! Delete some ToDo's to carry on"),
                             QMessageBox::Ok);
   }

    //Remove text from the lineEdit
    ui->lineEdit->clear();

}





#include "todolist.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ToDoList w;
    w.show();

    return a.exec();
}



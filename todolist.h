#ifndef TODOLIST_H
#define TODOLIST_H

#include <QMainWindow>

namespace Ui {
class ToDoList;
}

class ToDoList : public QMainWindow
{
    Q_OBJECT

public:
    explicit ToDoList(QWidget *parent = 0);
    ~ToDoList();

private:
    Ui::ToDoList *ui;
};

#endif // TODOLIST_H

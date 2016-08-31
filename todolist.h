#ifndef TODOLIST_H
#define TODOLIST_H

#include <QMainWindow>

#include<vector>
class TodoVeiw;


namespace Ui {
class ToDoList;
}

class ToDoList : public QMainWindow
{
    Q_OBJECT

public:
    explicit ToDoList(QWidget *parent = 0);
    ~ToDoList();

private slots:

    void on_toolButton_clicked();
    void delTodo(int);




private:
    Ui::ToDoList *ui;
    std::vector<TodoVeiw*> todoVeiw;
    int max = 0;
};



#endif // TODOLIST_H

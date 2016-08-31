#ifndef TODOVEIW_H
#define TODOVEIW_H
#include<QString>

class QLineEdit;
class QToolButton;
class QHBoxLayout;

#include<Qwidget>

class TodoVeiw:public QWidget
{
    Q_OBJECT

private:
    QLineEdit* toDoBox;
    QToolButton* removeButton;
    QHBoxLayout* toDoLayout;
    int index;

public:
    TodoVeiw(const QString& what, int index, QWidget* parent); ~TodoVeiw();

    inline void setIndex(int i) {index = i;}
    inline int getIndex(){return index;}

private slots:
    void emitIndex();

signals:
    void selectedIndex(int);
};


#endif // TODOVEIW_H

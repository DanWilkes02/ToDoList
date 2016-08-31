#include "todoveiw.h"

#include<QLineEdit>
#include<QToolButton>
#include<QHBoxLayout>

TodoVeiw::TodoVeiw(const QString& what, int index, QWidget* parent):QWidget(parent), index(index)
{
    toDoBox = new QLineEdit(this);
    toDoBox->setText(what);
    toDoBox->setReadOnly(true);

    removeButton = new QToolButton(this);
    removeButton->setText("X");

    toDoLayout = new QHBoxLayout(this);
    toDoLayout->addWidget(toDoBox);
    toDoLayout->addWidget(removeButton);

    connect(removeButton, SIGNAL(clicked()), this, SLOT(enitIndex()));
}


TodoVeiw::~TodoVeiw(){}

void TodoVeiw::emitIndex()
{
    emit selectedIndex(getIndex());
};

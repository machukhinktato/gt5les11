//
// Created by machukhinktato on 8/3/21.
//


#include <QHBoxLayout>
#include <QTableWidget>
#include "table.h"

Table::Table(QWidget *parent) : QWidget(parent) {
    QHBoxLayout *hbox = new QHBoxLayout(this);
    QTableWidget *table = new QTableWidget(25,25,this);
    hbox->addWidget(table);
}

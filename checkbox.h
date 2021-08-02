#pragma once;

#include <QWidget>

class Checkbox : public QWidget {

Q_OBJECT

public:
    Checkbox(QWidget *parent = nullptr);

private slots:

    void showTitle(int);

};
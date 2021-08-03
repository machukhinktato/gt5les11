#include <QPixmap>
#include <QLabel>
#include <QHBoxLayout>
#include "pixmap.h"

Pixmap::Pixmap(QWidget *parent) : QWidget(parent) {
    QHBoxLayout *hbox = new QHBoxLayout(this);

    QPixmap pixmap("/home/machukhinktato/projects/cpp/qt/qt5les11/thun.jpg");
    QLabel *label = new QLabel(this);
    label->setPixmap(pixmap);

    hbox->addWidget(label, 0, Qt::AlignTop);
}
#include <QApplication>
#include <QPushButton>
#include "checkbox.h"


int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Checkbox window;

    window.resize(200, 100);
    window.setWindowTitle("Machukhinktato");
    window.show();
    return QApplication::exec();
}

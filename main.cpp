#include <QApplication>
#include <QPushButton>
#include "checkbox.h"
#include "listwidget.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
//    Checkbox window;
    ListWidget window;


//    window.resize(200, 100);
    window.setWindowTitle("Machukhinktato");
    window.show();
    return QApplication::exec();
}

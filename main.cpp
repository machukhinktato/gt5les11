#include <QApplication>
#include <QPushButton>
#include "checkbox.h"
#include "listwidget.h"
#include "progressbar.h"


int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
//    Checkbox window;
//    ListWidget window;
    ProgressBarEx window;


    window.resize(500, 300);
    window.setWindowTitle("Machukhinktato");
    window.show();
    return QApplication::exec();
}

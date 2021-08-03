#include <QApplication>
#include <QPushButton>
#include "checkbox.h"
#include "listwidget.h"
#include "progressbar.h"
#include "pixmap.h"
#include "splitter.h"
#include "table.h"
int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
//    Checkbox window;
//    ListWidget window;
//    ProgressBarEx window;
//    Pixmap window;
//    Splitter window;
    Table window;


    window.resize(350, 300);
    window.setWindowTitle("Machukhinktato");
    window.show();
    return QApplication::exec();
}

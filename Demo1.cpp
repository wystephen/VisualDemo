#include <QtWidgets/QApplication>
#include "Widget.h"

int main(int argc, char* argv[]) {
    QApplication a(argc, argv);

    Widget w;
    w.setGeometry(700, 500, 320, 240);
    w.show();
    return a.exec();
}
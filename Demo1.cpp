#include <QtWidgets/QApplication>
#include "Widget.h"


#include <thread>



int main(int argc, char* argv[]) {
    QApplication a(argc, argv);


    Widget w;

    w.setGeometry(700, 500, 1320,1240);
    w.show();
//    std::thread time_thread([&]()
//                                         {
//                                             w.showTime();
//                                         });
//    time_thread.detach();
//    w.showTime();
    return a.exec();
}
//
// Created by steve on 17-6-29.
//

#ifndef VISUALDEMO_WIDGET_H
#define VISUALDEMO_WIDGET_H

#include <QtWidgets/QWidget>
#include <QMainWindow>
#include <QtWidgets/QApplication>
#include <QtCore/QDateTime>
#include "ui_widget.h"

#include <thread>

#include <iostream>
class Widget : public QWidget {
Q_OBJECT
public:
    Widget(QWidget* parent = 0);
    ~Widget();

    inline void showTime()
    {
//        QDateTime setTime = QDateTime::FromString(QString)
        std::cout << "eee"<< std::endl;
//
//        return true;
    }

private slots:
    void slotPushButton();

private:
    Ui::Widget ui;
    bool is_start_show_time = false;
    int m_iCount;
};

#endif //VISUALDEMO_WIDGET_H

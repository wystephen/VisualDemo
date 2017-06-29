//
// Created by steve on 17-6-29.
//

#ifndef VISUALDEMO_WIDGET_H
#define VISUALDEMO_WIDGET_H

#include <QtWidgets/QWidget>
#include <QMainWindow>
#include <QtWidgets/QApplication>
#include "ui_widget.h"


class Widget : public QWidget {
Q_OBJECT
public:
    Widget(QWidget* parent = 0);
    ~Widget();

private slots:
    void slotPushButton();

private:
    Ui::Widget ui;
    int m_iCount;
};

#endif //VISUALDEMO_WIDGET_H

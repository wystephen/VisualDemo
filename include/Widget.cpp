//
// Created by steve on 17-6-29.
//

#include "Widget.h"

Widget::Widget(QWidget* parent)
        : QWidget(parent)
{
    m_iCount = 0;
    ui.setupUi(this);
    connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(slotPushButton()));
}

Widget::~Widget() {

}

void Widget::slotPushButton() {
    ++m_iCount;
    ui.lineEdit->setText(QString::number(m_iCount));
}
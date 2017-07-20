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
    if(!is_start_show_time)
    {
        std::thread st([&](){
            while(1){

                ui.lineEdit_time->setText((QDateTime::currentDateTime().toString()));

            }

                       }
        );
//        st.detach();
        is_start_show_time=true;
    }
    ++m_iCount;
    ui.lineEdit->setText(QString::number(m_iCount));
}
#include "mywidget.h"

MyWidget::MyWidget(QWidget *parent) : QWidget(parent)
{
    q_slider = new QSlider(Qt::Horizontal, this);
    q_spin_box = new QSpinBox(this);

    QHBoxLayout* lay_out = new QHBoxLayout;

    lay_out->addWidget(q_slider);
    lay_out->addWidget(q_spin_box);

    setLayout(lay_out);

    void (QSpinBox::* pSpinBox)(int) = &QSpinBox::valueChanged;

    connect(q_slider, QSlider::valueChanged, q_spin_box, QSpinBox::setValue);
    connect(q_spin_box, (void (QSpinBox::*)(int))QSpinBox::valueChanged, q_slider, QSlider::setValue);
}

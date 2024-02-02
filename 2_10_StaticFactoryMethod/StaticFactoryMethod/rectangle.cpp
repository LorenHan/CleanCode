#include "rectangle.h"
#include <QDebug>

Rectangle::Rectangle(QObject *parent)
    : QObject{parent}
{}

Rectangle *Rectangle::WithWidth(QObject *parent, double width)
{
    Rectangle *instance = new Rectangle(parent);
    instance->width = width;
    instance->height = 0; // 默认高度为0
    return instance;
}

Rectangle *Rectangle::WithWidthAndHeight(QObject *parent, double width, double height)
{
    Rectangle *instance = new Rectangle(parent);
    instance->width = width;
    instance->height = height;
    return instance;
}

void Rectangle::Display() const
{
    qDebug() << "Width: " << width << ", Height: " << height;
}

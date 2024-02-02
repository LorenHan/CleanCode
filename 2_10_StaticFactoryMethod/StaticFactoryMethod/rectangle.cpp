#include "rectangle.h"
#include <QDebug>

Rectangle::Rectangle(QObject *parent)
    : QObject{parent}
{}

Rectangle *Rectangle::withWidth(QObject *parent, double width)
{
    Rectangle *instance = new Rectangle(parent);
    instance->width = width;
    instance->height = 0; // 默认高度为0
    return instance;
}

Rectangle *Rectangle::withWidthAndHeight(QObject *parent, double width, double height)
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

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <QObject>

class Rectangle : public QObject {
    Q_OBJECT
public:
    static Rectangle *WithWidth(QObject *parent, double width); // 静态工厂方法
    static Rectangle *WithWidthAndHeight(QObject *parent, double width, double height); // 静态工厂方法
    void Display() const;

private:
    explicit Rectangle(QObject *parent = nullptr);
    double width, height;
};

#endif // RECTANGLE_H

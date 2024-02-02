#include <QCoreApplication>

#include "rectangle.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Rectangle *r1 = Rectangle::WithWidth(nullptr, 5.0);
    Rectangle *r2 = Rectangle::WithWidthAndHeight(nullptr, 5.0, 10.0);

    r1->Display();
    r2->Display();

    // 注意：在实际应用中，请确保妥善管理这些动态创建的对象以避免内存泄露。
    // 这里为了示例简单，没有删除这些对象。
    // 在Qt中，如果指定了父对象，删除父对象时会自动删除子对象。

    return a.exec();
}

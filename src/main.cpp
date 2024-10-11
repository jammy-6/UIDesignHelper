#pragma execution_character_set("utf-8")
#include <QApplication>
#include "UIDesignHelper.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    UIDesignHelper w;
    w.show();

    return a.exec();
}

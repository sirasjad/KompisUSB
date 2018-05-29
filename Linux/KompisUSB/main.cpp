#include "kompis.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Kompis w;
    w.show();

    return a.exec();
}

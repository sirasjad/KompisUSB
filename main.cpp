#include "headers/kompis.h"
#include <QApplication>

int main(int argc, char *argv[]){
    QApplication prog(argc, argv);
    Kompis k;
    k.show();

    return prog.exec();
}

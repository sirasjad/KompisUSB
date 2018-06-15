#include "kompis.h"
#include "ui_kompis.h"

void Kompis::install_chrome(){
    log("Installerer Google Chrome");
    QProcess process;
    process.start("/home/sirasjad/Desktop/test.sh");
    process.waitForFinished();
    process.close();
    ui->box_chrome->setStyleSheet("QCheckBox { color: green; }");
}

void Kompis::install_mozilla(){
    log("Installerer Mozilla Firefox");
    ui->box_mozilla->setStyleSheet("QCheckBox { color: green; }");
}

void Kompis::install_elkjopcloud(){

}

void Kompis::install_remotefix(){

}

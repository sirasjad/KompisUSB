#include "kompis.h"
#include "ui_kompis.h"

Kompis::Kompis(QWidget *parent) : QMainWindow(parent), ui(new Ui::Kompis){
    ui->setupUi(this);
}

Kompis::~Kompis(){
    delete ui;
}

void Kompis::on_startKompis_clicked(){
    //ui->checkBox->setStyleSheet("QCheckBox { color: green; }");
}

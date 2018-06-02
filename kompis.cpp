#include "kompis.h"
#include "ui_kompis.h"

Kompis::Kompis(QWidget *parent) : QMainWindow(parent), ui(new Ui::Kompis){
    ui->setupUi(this);
    log("Starter KompisUSB.");
    QPixmap pix("/home/sirasjad/Jotta/GitHub/KompisUSB/resources/elkjop.png");
    ui->label_logo->setPixmap(pix);
}

Kompis::~Kompis(){
    delete ui;
}

void Kompis::on_startKompis_clicked(){
    ui->checkbox_install_ec->setStyleSheet("QCheckBox { color: green; }");
    log("Kjører Kompis.");
}

void Kompis::log(QString text){
    ui->logBox->appendPlainText("[" + getTime() + "] " + text);
}

QString Kompis::getTime(){
    QDateTime dateTime = dateTime.currentDateTime();
    QString dateTimeString = dateTime.toString("hh:mm:ss");
    return dateTimeString;
}

void Kompis::on_checkbox_install_ec_toggled(bool checked){
    if(checked) ui->checkbox_uninstall_ec->setEnabled(false);
    else ui->checkbox_uninstall_ec->setEnabled(true);
}

void Kompis::on_checkbox_uninstall_ec_toggled(bool checked){
    if(checked) ui->checkbox_install_ec->setEnabled(false);
    else ui->checkbox_install_ec->setEnabled(true);
}

void Kompis::on_checkbox_install_mb_toggled(bool checked){
    if(checked) ui->checkbox_uninstall_mb->setEnabled(false);
    else ui->checkbox_uninstall_mb->setEnabled(true);
}

void Kompis::on_checkbox_uninstall_mb_toggled(bool checked){
    if(checked) ui->checkbox_install_mb->setEnabled(false);
    else ui->checkbox_install_mb->setEnabled(true);
}

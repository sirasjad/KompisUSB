#include "kompis.h"
#include "ui_kompis.h"
#include "aboutwindow.h"
#include "settings.h"

Kompis::Kompis(QWidget *parent) : QMainWindow(parent), ui(new Ui::Kompis){
    ui->setupUi(this);
    loadProgram();
}

Kompis::~Kompis(){
    delete ui;
}

void Kompis::loadProgram(){
    log(name + " (versjon " + version + ") - " + "Utviklet av Sirajuddin Asjad");

    #if defined(Q_OS_MACOS)
        os = "mac";
    #elif defined(Q_OS_WIN)
        os = "windows";
    #elif defined(Q_OS_LINUX)
        os = "linux";
    #else
        os = "unknown";
    #endif

    if(os == "mac"){
        log("Kjører KompisUSB for Mac, laster inn objekter.");
        ui->box_win10update->setEnabled(false);
        ui->box_win8update->setEnabled(false);
        ui->box_winlive->setEnabled(false);
        ui->box_classicstart->setEnabled(false);
        ui->box_crapfjerner->setEnabled(false);
    }
    else if(os == "windows"){
        log("Kjører KompisUSB for Windows, laster inn objekter.");
        ui->box_onyx->setEnabled(false);
    }
    else if(os == "linux"){
        log("Kjører KompisUSB for Linux, laster inn objekter.");
        ui->startKompis->setEnabled(false);
    }
    else{
        ui->startKompis->setEnabled(false);
        log("Ukjent operativsystem. Kontakt utvikler!");
    }
}

void Kompis::on_startKompis_clicked(){
    ui->box_elkjopcloud->setStyleSheet("QCheckBox { color: green; }");
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

void Kompis::on_box_elkjopcloud_toggled(bool checked){
    if(checked){
        ui->box_fjerncloud->setChecked(false);
        ui->box_fjerncloud->setEnabled(false);
    }
    else ui->box_fjerncloud->setEnabled(true);
}

void Kompis::on_box_fjerncloud_toggled(bool checked){
    if(checked){
        ui->box_elkjopcloud->setChecked(false);
        ui->box_elkjopcloud->setEnabled(false);
    }
    else ui->box_elkjopcloud->setEnabled(true);
}

void Kompis::on_box_malw_toggled(bool checked){
    if(checked){
        ui->box_fjernmalw->setChecked(false);
        ui->box_fjernmalw->setEnabled(false);
    }
    else ui->box_fjernmalw->setEnabled(true);
}

void Kompis::on_box_fjernmalw_toggled(bool checked){
    if(checked){
        ui->box_malw->setChecked(false);
        ui->box_malw->setEnabled(false);
    }
    else ui->box_malw->setEnabled(true);
}

void Kompis::on_box_remotefix_toggled(bool checked){
    if(checked){
        ui->box_fjernremote->setChecked(false);
        ui->box_fjernremote->setEnabled(false);
    }
    else ui->box_fjernremote->setEnabled(true);
}

void Kompis::on_box_fjernremote_toggled(bool checked){
    if(checked){
        ui->box_remotefix->setChecked(false);
        ui->box_remotefix->setEnabled(false);
    }
    else ui->box_remotefix->setEnabled(true);
}

void Kompis::on_menu_omkompis_triggered(){
    AboutWindow ab;
    ab.setModal(true);
    ab.exec();
}

void Kompis::on_menu_innstillinger_triggered(){
    Settings se;
    se.setModal(true);
    se.exec();
}

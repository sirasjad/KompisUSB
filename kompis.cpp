#include "kompis.h"
#include "ui_kompis.h"

Kompis::Kompis(QWidget *parent) : QMainWindow(parent), ui(new Ui::Kompis){
    ui->setupUi(this);
    loadProgram();
}

Kompis::~Kompis(){
    delete ui;
}

void Kompis::loadProgram(){
    // Sjekk OS versjon
    #if defined(Q_OS_MACOS)
        os = "mac";
    #elif defined(Q_OS_WIN)
        os = "windows";
    #elif defined(Q_OS_LINUX)
        os = "linux";
    #elif defined(Q_OS_UNIX)
        os = "unix";
    #else
        os = "unknown";
    #endif

    // Sett logo
    QString dir = "../" + QDir::currentPath();
    QString dir2 = dir + "/resources/elkjop.png";
    log(dir2);
    //QPixmap pix();
    //ui->label_logo->setPixmap(pix);

    // Checkbox oppsett
    if(os == "mac"){
        ui->box_win10update->setEnabled(false);
        ui->box_win8update->setEnabled(false);
        ui->box_winlive->setEnabled(false);
        ui->box_classicstart->setEnabled(false);
        ui->box_crapfjerner->setEnabled(false);
        log("Kjører KompisUSB for Mac.");
    }
    else if(os == "windows"){
        ui->box_onyx->setEnabled(false);
        log("Kjører KompisUSB for Windows.");
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

//void Kompis::on_checkbox_install_ec_toggled(bool checked){
//    if(checked) ui->checkbox_uninstall_ec->setEnabled(false);
//    else ui->checkbox_uninstall_ec->setEnabled(true);
//}

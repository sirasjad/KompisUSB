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
        log("Kjører KompisUSB for Mac. Antall CPU kjerner: 0");
        ui->box_win10update->setEnabled(false);
        ui->box_win8update->setEnabled(false);
        ui->box_winlive->setEnabled(false);
        ui->box_classicstart->setEnabled(false);
        ui->box_crapfjerner->setEnabled(false);
    }
    else if(os == "windows"){
        log("Kjører KompisUSB for Windows. Antall CPU kjerner: 0");
        ui->box_onyx->setEnabled(false);
    }
    else if(os == "linux"){
        log("Kjører KompisUSB for Linux. Antall CPU kjerner: 0");
    }
    else{
        ui->startKompis->setEnabled(false);
        log("Ukjent operativsystem. Kontakt utvikler!");
    }
    log("------------------------------------------------------------------------------------");
}

void Kompis::on_startKompis_clicked(){
    if(isRunning){
        isRunning = false;
        ui->startKompis->setText("START KOMPIS");
        log("Du har avbrutt Kompis!");
        return;
    }
    else{
        isRunning = true;
        ui->startKompis->setText("AVBRYT");
        log("Starter Kompis...");
    }

    // Internett
    if(ui->box_chrome->isEnabled() && ui->box_chrome->isChecked()) install_chrome();
    if(ui->box_mozilla->isEnabled() && ui->box_mozilla->isChecked()) install_mozilla();
    if(ui->box_elkjopcloud->isEnabled() && ui->box_elkjopcloud->isChecked()) install_elkjopcloud();
    if(ui->box_remotefix->isEnabled() && ui->box_remotefix->isChecked()) install_remotefix();

    log("Kompis har fullført! Du kan nå avslutte programmet.");
    isRunning = false;
    ui->startKompis->setText("START KOMPIS");
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

void Kompis::on_menu_oppdatering_triggered(){
    //
}

void Kompis::on_modus_nullstill_clicked(){
    ui->modus_sa->setStyleSheet("QPushButton { color: black; }");
    ui->modus_rtg->setStyleSheet("QPushButton { color: black; }");
    ui->modus_service->setStyleSheet("QPushButton { color: black; }");

    // Internett
    if(ui->box_chrome->isEnabled() == true) ui->box_chrome->setChecked(false);
    if(ui->box_mozilla->isEnabled() == true) ui->box_mozilla->setChecked(false);
    if(ui->box_elkjopcloud->isEnabled() == true) ui->box_elkjopcloud->setChecked(false);
    if(ui->box_remotefix->isEnabled() == true) ui->box_remotefix->setChecked(false);

    // Rens
    if(ui->box_malw->isEnabled() == true) ui->box_malw->setChecked(false);
    if(ui->box_onyx->isEnabled() == true) ui->box_onyx->setChecked(false);
    if(ui->box_crapfjerner->isEnabled() == true) ui->box_crapfjerner->setChecked(false);
    if(ui->box_ccleaner->isEnabled() == true) ui->box_ccleaner->setChecked(false);

    // Diverse
    if(ui->box_skype->isEnabled() == true) ui->box_skype->setChecked(false);
    if(ui->box_steam->isEnabled() == true) ui->box_steam->setChecked(false);
    if(ui->box_7zip->isEnabled() == true) ui->box_7zip->setChecked(false);
    if(ui->box_imgburn->isEnabled() == true) ui->box_imgburn->setChecked(false);

    // Media
    if(ui->box_vlc->isEnabled() == true) ui->box_vlc->setChecked(false);
    if(ui->box_itunes->isEnabled() == true) ui->box_itunes->setChecked(false);
    if(ui->box_spotify->isEnabled() == true) ui->box_spotify->setChecked(false);
    if(ui->box_codecs->isEnabled() == true) ui->box_codecs->setChecked(false);

    // Runtime
    if(ui->box_java->isEnabled() == true) ui->box_java->setChecked(false);
    if(ui->box_silverlight->isEnabled() == true) ui->box_silverlight->setChecked(false);
    if(ui->box_dotnet->isEnabled() == true) ui->box_dotnet->setChecked(false);
    if(ui->box_adobeair->isEnabled() == true) ui->box_adobeair->setChecked(false);

    // Verktøy
    if(ui->box_classicstart->isEnabled() == true) ui->box_classicstart->setChecked(false);
    if(ui->box_ddu->isEnabled() == true) ui->box_ddu->setChecked(false);
    if(ui->box_mailpw->isEnabled() == true) ui->box_mailpw->setChecked(false);
    if(ui->box_browserpw->isEnabled() == true) ui->box_browserpw->setChecked(false);
    if(ui->box_produkey->isEnabled() == true) ui->box_produkey->setChecked(false);
    if(ui->box_reveal->isEnabled() == true) ui->box_reveal->setChecked(false);

    // Kontor
    if(ui->box_winlive->isEnabled() == true) ui->box_winlive->setChecked(false);
    if(ui->box_thunderbird->isEnabled() == true) ui->box_thunderbird->setChecked(false);
    if(ui->box_office->isEnabled() == true) ui->box_office->setChecked(false);
    if(ui->box_libreoffice->isEnabled() == true) ui->box_libreoffice->setChecked(false);
    if(ui->box_foxit->isEnabled() == true) ui->box_foxit->setChecked(false);
    if(ui->box_adobereader->isEnabled() == true) ui->box_adobereader->setChecked(false);

    // Oppdatering
    if(ui->box_win10update->isEnabled() == true) ui->box_win10update->setChecked(false);
    if(ui->box_win8update->isEnabled() == true) ui->box_win8update->setChecked(false);
    if(ui->box_wsus->isEnabled() == true) ui->box_wsus->setChecked(false);

    // Avinstaller
    if(ui->box_mcafee->isEnabled() == true) ui->box_mcafee->setChecked(false);
    if(ui->box_norton->isEnabled() == true) ui->box_norton->setChecked(false);
    if(ui->box_fsecure->isEnabled() == true) ui->box_fsecure->setChecked(false);
    if(ui->box_fjerncloud->isEnabled() == true) ui->box_fjerncloud->setChecked(false);
    if(ui->box_fjernmalw->isEnabled() == true) ui->box_fjernmalw->setChecked(false);
    if(ui->box_fjernremote->isEnabled() == true) ui->box_fjernremote->setChecked(false);

    //  Avslutning
    if(ui->box_nettleser->isEnabled() == true) ui->box_nettleser->setChecked(false);
    if(ui->box_snarvei->isEnabled() == true) ui->box_snarvei->setChecked(false);
    if(ui->box_kundeinfo->isEnabled() == true) ui->box_kundeinfo->setChecked(false);
    if(ui->box_restart->isEnabled() == true) ui->box_restart->setChecked(false);
}

void Kompis::on_modus_sa_clicked(){
    ui->modus_sa->setStyleSheet("QPushButton { color: green; }");
    ui->modus_rtg->setStyleSheet("QPushButton { color: black; }");
    ui->modus_service->setStyleSheet("QPushButton { color: black; }");

    // Internett
    ui->box_chrome->setChecked(true);
    ui->box_mozilla->setChecked(false);
    ui->box_elkjopcloud->setChecked(true);
    ui->box_remotefix->setChecked(true);

    // Rens
    ui->box_malw->setChecked(false);
    ui->box_onyx->setChecked(false);
    if(os == "windows") ui->box_crapfjerner->setChecked(true);
    ui->box_ccleaner->setChecked(true);

    // Diverse
    ui->box_skype->setChecked(true);
    ui->box_steam->setChecked(false);
    ui->box_7zip->setChecked(true);
    ui->box_imgburn->setChecked(true);

    // Media
    ui->box_vlc->setChecked(true);
    ui->box_itunes->setChecked(true);
    ui->box_spotify->setChecked(true);
    ui->box_codecs->setChecked(true);

    // Runtime
    ui->box_java->setChecked(true);
    ui->box_silverlight->setChecked(true);
    ui->box_dotnet->setChecked(true);
    ui->box_adobeair->setChecked(true);

    // Verktøy
    ui->box_classicstart->setChecked(false);
    ui->box_ddu->setChecked(false);
    ui->box_mailpw->setChecked(false);
    ui->box_browserpw->setChecked(false);
    ui->box_produkey->setChecked(false);
    ui->box_reveal->setChecked(false);

    // Kontor
    ui->box_winlive->setChecked(false);
    ui->box_thunderbird->setChecked(false);
    ui->box_office->setChecked(false);
    ui->box_libreoffice->setChecked(false);
    ui->box_foxit->setChecked(false);
    ui->box_adobereader->setChecked(true);

    // Oppdatering
    ui->box_win10update->setChecked(false);
    ui->box_win8update->setChecked(false);
    ui->box_wsus->setChecked(false);

    // Avinstaller
    ui->box_mcafee->setChecked(false);
    ui->box_norton->setChecked(false);
    ui->box_fsecure->setChecked(false);
    ui->box_fjerncloud->setChecked(false);
    ui->box_fjernmalw->setChecked(false);
    ui->box_fjernremote->setChecked(false);

    //  Avslutning
    ui->box_nettleser->setChecked(true);
    ui->box_snarvei->setChecked(true);
    ui->box_kundeinfo->setChecked(true);
    ui->box_restart->setChecked(false);
}

void Kompis::on_modus_rtg_clicked(){
    ui->modus_sa->setStyleSheet("QPushButton { color: black; }");
    ui->modus_rtg->setStyleSheet("QPushButton { color: green; }");
    ui->modus_service->setStyleSheet("QPushButton { color: black; }");

    // Internett
    ui->box_chrome->setChecked(true);
    ui->box_mozilla->setChecked(false);
    ui->box_elkjopcloud->setChecked(false);
    ui->box_remotefix->setChecked(false);

    // Rens
    ui->box_malw->setChecked(false);
    ui->box_onyx->setChecked(false);
    if(os == "windows") ui->box_crapfjerner->setChecked(true);
    ui->box_ccleaner->setChecked(true);

    // Diverse
    ui->box_skype->setChecked(true);
    ui->box_steam->setChecked(false);
    ui->box_7zip->setChecked(true);
    ui->box_imgburn->setChecked(true);

    // Media
    ui->box_vlc->setChecked(true);
    ui->box_itunes->setChecked(true);
    ui->box_spotify->setChecked(true);
    ui->box_codecs->setChecked(true);

    // Runtime
    ui->box_java->setChecked(true);
    ui->box_silverlight->setChecked(true);
    ui->box_dotnet->setChecked(true);
    ui->box_adobeair->setChecked(true);

    // Verktøy
    ui->box_classicstart->setChecked(false);
    ui->box_ddu->setChecked(false);
    ui->box_mailpw->setChecked(false);
    ui->box_browserpw->setChecked(false);
    ui->box_produkey->setChecked(false);
    ui->box_reveal->setChecked(false);

    // Kontor
    ui->box_winlive->setChecked(false);
    ui->box_thunderbird->setChecked(false);
    ui->box_office->setChecked(false);
    ui->box_libreoffice->setChecked(true);
    ui->box_foxit->setChecked(false);
    ui->box_adobereader->setChecked(true);

    // Oppdatering
    ui->box_win10update->setChecked(false);
    ui->box_win8update->setChecked(false);
    ui->box_wsus->setChecked(false);

    // Avinstaller
    ui->box_mcafee->setChecked(false);
    ui->box_norton->setChecked(false);
    ui->box_fsecure->setChecked(false);
    ui->box_fjerncloud->setChecked(false);
    ui->box_fjernmalw->setChecked(false);
    ui->box_fjernremote->setChecked(false);

    //  Avslutning
    ui->box_nettleser->setChecked(true);
    ui->box_snarvei->setChecked(true);
    ui->box_kundeinfo->setChecked(false);
    ui->box_restart->setChecked(false);
}

void Kompis::on_modus_service_clicked(){
    ui->modus_sa->setStyleSheet("QPushButton { color: black; }");
    ui->modus_rtg->setStyleSheet("QPushButton { color: black; }");
    ui->modus_service->setStyleSheet("QPushButton { color: green; }");

    // Internett
    ui->box_chrome->setChecked(true);
    ui->box_mozilla->setChecked(false);
    ui->box_elkjopcloud->setChecked(true);
    ui->box_remotefix->setChecked(true);

    // Rens
    ui->box_malw->setChecked(true);
    if(os == "mac") ui->box_onyx->setChecked(true);
    if(os == "windows") ui->box_crapfjerner->setChecked(true);
    ui->box_ccleaner->setChecked(true);

    // Diverse
    ui->box_skype->setChecked(true);
    ui->box_steam->setChecked(false);
    ui->box_7zip->setChecked(true);
    ui->box_imgburn->setChecked(true);

    // Media
    ui->box_vlc->setChecked(true);
    ui->box_itunes->setChecked(true);
    ui->box_spotify->setChecked(true);
    ui->box_codecs->setChecked(true);

    // Runtime
    ui->box_java->setChecked(true);
    ui->box_silverlight->setChecked(true);
    ui->box_dotnet->setChecked(true);
    ui->box_adobeair->setChecked(true);

    // Verktøy
    ui->box_classicstart->setChecked(false);
    ui->box_ddu->setChecked(false);
    ui->box_mailpw->setChecked(false);
    ui->box_browserpw->setChecked(false);
    ui->box_produkey->setChecked(false);
    ui->box_reveal->setChecked(false);

    // Kontor
    ui->box_winlive->setChecked(false);
    ui->box_thunderbird->setChecked(false);
    ui->box_office->setChecked(false);
    ui->box_libreoffice->setChecked(false);
    ui->box_foxit->setChecked(false);
    ui->box_adobereader->setChecked(true);

    // Oppdatering
    ui->box_win10update->setChecked(false);
    ui->box_win8update->setChecked(false);
    ui->box_wsus->setChecked(false);

    // Avinstaller
    ui->box_mcafee->setChecked(false);
    ui->box_norton->setChecked(false);
    ui->box_fsecure->setChecked(false);
    ui->box_fjerncloud->setChecked(false);
    ui->box_fjernmalw->setChecked(false);
    ui->box_fjernremote->setChecked(false);

    //  Avslutning
    ui->box_nettleser->setChecked(true);
    ui->box_snarvei->setChecked(true);
    ui->box_kundeinfo->setChecked(false);
    ui->box_restart->setChecked(false);
}

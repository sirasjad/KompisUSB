#include "settings.h"
#include "ui_settings.h"

Settings::Settings(QWidget *parent) : QDialog(parent), ui(new Ui::Settings){
    ui->setupUi(this);
    loadSettings();
    isListEmpty();
}

Settings::~Settings(){
    delete ui;
}

void Settings::loadSettings(){
    //
}

void Settings::isListEmpty(){
    if(ui->list->count() == 0){
        ui->button_delete->setEnabled(false);
    }
    else{
        ui->button_delete->setEnabled(true);
    }
}

void Settings::on_button_add_clicked(){
    QString fileAddress = ui->text_address->text();
    if(ui->text_address->text() != ""){
        ui->list->addItem(fileAddress);
    }
    ui->text_address->clear();
    isListEmpty();
}

void Settings::on_button_delete_clicked(){
    delete ui->list->currentItem();
    isListEmpty();
}

void Settings::on_save_clicked(){
    // export to file
}

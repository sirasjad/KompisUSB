#include "headers/kompis.h"
#include "ui_kompis.h"

void Kompis::install_chrome(){
    log("Installerer Google Chrome");

    QProcess process;
    process.start("../scripts/mac/test.sh");
    QString qEnv = qgetenv("CHROME_FINISHED");
    log(qEnv);
    process.close();

    //process.startDetached("../scripts/mac/test.sh");
    ui->box_chrome->setStyleSheet("QCheckBox { color: green; }");
}

void Kompis::install_mozilla(){
    //
}

void Kompis::install_elkjopcloud(){
    //
}

void Kompis::install_remotefix(){
    //
}

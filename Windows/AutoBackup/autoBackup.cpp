#include "main.h"

autoBackup::autoBackup(){}
autoBackup::~autoBackup(){}

void autoBackup::menu(){
  std::cout << "AUTOBACKUP - KNOWHOW DRAMMEN\n";
  std::cout << "(Utviklet av Sirajuddin Asjad | admin@siratech.no)\n\n";
  std::cout << "INFO: Automatisk backup starter om 15 sekunder.\n";
  std::cout << "INFO: Avslutt programmet om du ikke ønsker backup.\n";

  std::cout << "[";
  for(int i = 0; i < 15; i++){
    std::cout << "###";
    sleep(1);
  }
  std::cout << "]\n";
  sleep(3);
}

void autoBackup::startBackup(){
  // tba
}

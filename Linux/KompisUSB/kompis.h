#ifndef KOMPIS_H
#define KOMPIS_H
#include <QMainWindow>

namespace Ui{
    class Kompis;
}

class Kompis : public QMainWindow{
    Q_OBJECT

public:
    explicit Kompis(QWidget *parent = 0);
    ~Kompis();

private slots:
    void on_startKompis_clicked();

private:
    Ui::Kompis *ui;
};

#endif

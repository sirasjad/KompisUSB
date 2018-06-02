#ifndef KOMPIS_H
#define KOMPIS_H
#include <QMainWindow>
#include <QDateTime>

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
    void on_checkbox_install_ec_toggled(bool checked);
    void on_checkbox_uninstall_ec_toggled(bool checked);
    void on_checkbox_install_mb_toggled(bool checked);
    void on_checkbox_uninstall_mb_toggled(bool checked);

private:
    Ui::Kompis *ui;
    QString getTime();
    void log(QString);
};

#endif

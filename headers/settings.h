#ifndef SETTINGS_H
#define SETTINGS_H
#include <QDialog>

namespace Ui{
    class Settings;
}

class Settings : public QDialog{
    Q_OBJECT

public:
    explicit Settings(QWidget *parent = 0);
    ~Settings();

private slots:
    void on_button_add_clicked();
    void on_button_delete_clicked();
    void on_save_clicked();

private:
    Ui::Settings *ui;
    void loadSettings();
    void isListEmpty();
};

#endif

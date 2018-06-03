/********************************************************************************
** Form generated from reading UI file 'about_old.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_OLD_H
#define UI_ABOUT_OLD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QMainWindow *AboutWindow)
    {
        if (AboutWindow->objectName().isEmpty())
            AboutWindow->setObjectName(QStringLiteral("AboutWindow"));
        AboutWindow->resize(522, 348);
        centralwidget = new QWidget(AboutWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 300, 191, 41));
        label->setPixmap(QPixmap(QString::fromUtf8(":/files/img/kh.png")));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 30, 101, 101));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/files/img/elkjop.png")));
        label_2->setScaledContents(true);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 10, 171, 41));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 50, 411, 231));
        AboutWindow->setCentralWidget(centralwidget);

        retranslateUi(AboutWindow);

        QMetaObject::connectSlotsByName(AboutWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AboutWindow)
    {
        AboutWindow->setWindowTitle(QApplication::translate("AboutWindow", "MainWindow", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QApplication::translate("AboutWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600;\">KompisUSB v1.0</span></p></body></html>", nullptr));
        label_4->setText(QApplication::translate("AboutWindow", "<html><head/><body><p>Vennligst ikke distribuer denne uten tillatelse fra utvikler. <br/>For support eller tilbakemeldinger, ta kontakt p\303\245 mail <br/>til <span style=\" text-decoration: underline;\">admin@siratech.no</span> eller send en melding p\303\245 Workplace.</p><p><span style=\" font-weight:600;\"><br/>Utvikler: <br/></span>Sirajuddin Asjad (Elkj\303\270p Drammen) <br/>Epost: admin@siratech.no <br/>GitHub: https://github.com/sirajuddin97 <br/>LinkedIn: https://www.linkedin.com/in/sirajuddin97 </p><p><span style=\" font-weight:600;\"><br/>\303\205pen kildekode: <br/></span>https://github.com/sirajuddin97/KompisUSB</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutWindow: public Ui_AboutWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_OLD_H

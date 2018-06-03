/********************************************************************************
** Form generated from reading UI file 'aboutwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTWINDOW_H
#define UI_ABOUTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_AboutWindow
{
public:
    QLabel *logo_kh;
    QLabel *header;
    QLabel *text;
    QLabel *logo_elkjop;

    void setupUi(QDialog *AboutWindow)
    {
        if (AboutWindow->objectName().isEmpty())
            AboutWindow->setObjectName(QStringLiteral("AboutWindow"));
        AboutWindow->resize(522, 348);
        logo_kh = new QLabel(AboutWindow);
        logo_kh->setObjectName(QStringLiteral("logo_kh"));
        logo_kh->setGeometry(QRect(170, 300, 191, 41));
        logo_kh->setPixmap(QPixmap(QString::fromUtf8(":/files/img/kh.png")));
        logo_kh->setScaledContents(true);
        logo_kh->setAlignment(Qt::AlignCenter);
        header = new QLabel(AboutWindow);
        header->setObjectName(QStringLiteral("header"));
        header->setGeometry(QRect(40, 10, 171, 41));
        text = new QLabel(AboutWindow);
        text->setObjectName(QStringLiteral("text"));
        text->setGeometry(QRect(100, 50, 411, 231));
        logo_elkjop = new QLabel(AboutWindow);
        logo_elkjop->setObjectName(QStringLiteral("logo_elkjop"));
        logo_elkjop->setGeometry(QRect(10, 30, 101, 101));
        logo_elkjop->setPixmap(QPixmap(QString::fromUtf8(":/files/img/elkjop.png")));
        logo_elkjop->setScaledContents(true);
        logo_elkjop->setAlignment(Qt::AlignCenter);

        retranslateUi(AboutWindow);

        QMetaObject::connectSlotsByName(AboutWindow);
    } // setupUi

    void retranslateUi(QDialog *AboutWindow)
    {
        AboutWindow->setWindowTitle(QApplication::translate("AboutWindow", "Om Kompis", nullptr));
        logo_kh->setText(QString());
        header->setText(QApplication::translate("AboutWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600;\">KompisUSB v1.0</span></p></body></html>", nullptr));
        text->setText(QApplication::translate("AboutWindow", "<html><head/><body><p>Vennligst ikke distribuer denne uten tillatelse fra utvikler. <br/>For support eller tilbakemeldinger, ta kontakt p\303\245 mail <br/>til <span style=\" text-decoration: underline;\">admin@siratech.no</span> eller send en melding p\303\245 Workplace.</p><p><span style=\" font-weight:600;\"><br/>Utvikler: <br/></span>Sirajuddin Asjad (Elkj\303\270p Drammen) <br/>Epost: admin@siratech.no <br/>GitHub: https://github.com/sirajuddin97 <br/>LinkedIn: https://www.linkedin.com/in/sirajuddin97 </p><p><span style=\" font-weight:600;\"><br/>\303\205pen kildekode: <br/></span>https://github.com/sirajuddin97/KompisUSB</p></body></html>", nullptr));
        logo_elkjop->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AboutWindow: public Ui_AboutWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTWINDOW_H

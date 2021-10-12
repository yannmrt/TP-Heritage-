/********************************************************************************
** Form generated from reading UI file 'LancerDe.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LANCERDE_H
#define UI_LANCERDE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LancerDeClass
{
public:
    QPushButton *showValueDeButton;
    QPushButton *startDeButton;
    QPlainTextEdit *showTextDeValue;
    QPlainTextEdit *showTextTotalScoreValue;
    QPushButton *resetTotalScoreButto;
    QPushButton *showTotalScoreButton;

    void setupUi(QWidget *LancerDeClass)
    {
        if (LancerDeClass->objectName().isEmpty())
            LancerDeClass->setObjectName(QString::fromUtf8("LancerDeClass"));
        LancerDeClass->resize(369, 351);
        showValueDeButton = new QPushButton(LancerDeClass);
        showValueDeButton->setObjectName(QString::fromUtf8("showValueDeButton"));
        showValueDeButton->setGeometry(QRect(160, 20, 141, 31));
        startDeButton = new QPushButton(LancerDeClass);
        startDeButton->setObjectName(QString::fromUtf8("startDeButton"));
        startDeButton->setGeometry(QRect(20, 80, 111, 51));
        showTextDeValue = new QPlainTextEdit(LancerDeClass);
        showTextDeValue->setObjectName(QString::fromUtf8("showTextDeValue"));
        showTextDeValue->setGeometry(QRect(160, 60, 141, 91));
        showTextTotalScoreValue = new QPlainTextEdit(LancerDeClass);
        showTextTotalScoreValue->setObjectName(QString::fromUtf8("showTextTotalScoreValue"));
        showTextTotalScoreValue->setGeometry(QRect(160, 240, 141, 91));
        resetTotalScoreButto = new QPushButton(LancerDeClass);
        resetTotalScoreButto->setObjectName(QString::fromUtf8("resetTotalScoreButto"));
        resetTotalScoreButto->setGeometry(QRect(160, 200, 141, 31));
        showTotalScoreButton = new QPushButton(LancerDeClass);
        showTotalScoreButton->setObjectName(QString::fromUtf8("showTotalScoreButton"));
        showTotalScoreButton->setGeometry(QRect(20, 260, 111, 51));

        retranslateUi(LancerDeClass);
        QObject::connect(startDeButton, SIGNAL(clicked()), LancerDeClass, SLOT(startDeButtonClicked()));
        QObject::connect(showValueDeButton, SIGNAL(clicked()), LancerDeClass, SLOT(showValueDeButtonClicked()));
        QObject::connect(showTotalScoreButton, SIGNAL(clicked()), LancerDeClass, SLOT(showTotalScoreButtonClicked()));
        QObject::connect(resetTotalScoreButto, SIGNAL(clicked()), LancerDeClass, SLOT(resetTotalScoreButtonClicked()));

        QMetaObject::connectSlotsByName(LancerDeClass);
    } // setupUi

    void retranslateUi(QWidget *LancerDeClass)
    {
        LancerDeClass->setWindowTitle(QCoreApplication::translate("LancerDeClass", "LancerDe", nullptr));
        showValueDeButton->setText(QCoreApplication::translate("LancerDeClass", "Afficher la valeur du d\303\251", nullptr));
        startDeButton->setText(QCoreApplication::translate("LancerDeClass", "Lancer le d\303\251", nullptr));
        resetTotalScoreButto->setText(QCoreApplication::translate("LancerDeClass", "Remise \303\240 z\303\251ro du score", nullptr));
        showTotalScoreButton->setText(QCoreApplication::translate("LancerDeClass", "Afficher score total", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LancerDeClass: public Ui_LancerDeClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LANCERDE_H

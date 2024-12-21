/********************************************************************************
** Form generated from reading UI file 'mywidget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIDGET_H
#define UI_MYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QGroupBox *connectGroup;
    QGridLayout *gridLayout;
    QLineEdit *hostLineEdit;
    QPushButton *conectBtn;
    QGroupBox *talkGroup;
    QLineEdit *Wiadomosc;
    QPushButton *sendBtn;
    QTextEdit *Haslo;
    QTextEdit *Komunikaty;
    QGraphicsView *Image;
    QListWidget *Ranking;
    QPushButton *exitBtn;
    QTextEdit *Time;
    QGroupBox *Menu;
    QGridLayout *gridLayout_2;
    QPushButton *rulesBtn;
    QPushButton *joinBtn;
    QGroupBox *NickGroup;
    QGridLayout *gridLayout_3;
    QPushButton *nickBtn;
    QLineEdit *Nick;
    QTextEdit *KomunikatyGeneral;
    QPushButton *disconnectBtn;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName("MyWidget");
        MyWidget->resize(1573, 597);
        connectGroup = new QGroupBox(MyWidget);
        connectGroup->setObjectName("connectGroup");
        connectGroup->setGeometry(QRect(0, 0, 781, 91));
        gridLayout = new QGridLayout(connectGroup);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        hostLineEdit = new QLineEdit(connectGroup);
        hostLineEdit->setObjectName("hostLineEdit");

        gridLayout->addWidget(hostLineEdit, 1, 0, 1, 1);

        conectBtn = new QPushButton(connectGroup);
        conectBtn->setObjectName("conectBtn");

        gridLayout->addWidget(conectBtn, 0, 0, 1, 1);

        talkGroup = new QGroupBox(MyWidget);
        talkGroup->setObjectName("talkGroup");
        talkGroup->setEnabled(false);
        talkGroup->setGeometry(QRect(800, 0, 761, 521));
        Wiadomosc = new QLineEdit(talkGroup);
        Wiadomosc->setObjectName("Wiadomosc");
        Wiadomosc->setGeometry(QRect(20, 480, 361, 26));
        Wiadomosc->setMaxLength(1);
        sendBtn = new QPushButton(talkGroup);
        sendBtn->setObjectName("sendBtn");
        sendBtn->setGeometry(QRect(390, 480, 80, 26));
        Haslo = new QTextEdit(talkGroup);
        Haslo->setObjectName("Haslo");
        Haslo->setGeometry(QRect(20, 400, 361, 70));
        QFont font;
        font.setPointSize(15);
        Haslo->setFont(font);
        Komunikaty = new QTextEdit(talkGroup);
        Komunikaty->setObjectName("Komunikaty");
        Komunikaty->setGeometry(QRect(390, 290, 341, 161));
        Komunikaty->setFont(font);
        Image = new QGraphicsView(talkGroup);
        Image->setObjectName("Image");
        Image->setGeometry(QRect(20, 20, 361, 371));
        Ranking = new QListWidget(talkGroup);
        Ranking->setObjectName("Ranking");
        Ranking->setGeometry(QRect(390, 20, 341, 261));
        Ranking->setFont(font);
        exitBtn = new QPushButton(talkGroup);
        exitBtn->setObjectName("exitBtn");
        exitBtn->setGeometry(QRect(480, 480, 80, 26));
        Time = new QTextEdit(talkGroup);
        Time->setObjectName("Time");
        Time->setGeometry(QRect(580, 460, 171, 51));
        QFont font1;
        font1.setPointSize(30);
        Time->setFont(font1);
        Menu = new QGroupBox(MyWidget);
        Menu->setObjectName("Menu");
        Menu->setGeometry(QRect(10, 460, 781, 131));
        gridLayout_2 = new QGridLayout(Menu);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName("gridLayout_2");
        rulesBtn = new QPushButton(Menu);
        rulesBtn->setObjectName("rulesBtn");

        gridLayout_2->addWidget(rulesBtn, 1, 0, 1, 1);

        joinBtn = new QPushButton(Menu);
        joinBtn->setObjectName("joinBtn");

        gridLayout_2->addWidget(joinBtn, 0, 0, 1, 1);

        NickGroup = new QGroupBox(MyWidget);
        NickGroup->setObjectName("NickGroup");
        NickGroup->setGeometry(QRect(0, 320, 781, 131));
        gridLayout_3 = new QGridLayout(NickGroup);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName("gridLayout_3");
        nickBtn = new QPushButton(NickGroup);
        nickBtn->setObjectName("nickBtn");

        gridLayout_3->addWidget(nickBtn, 1, 0, 1, 1);

        Nick = new QLineEdit(NickGroup);
        Nick->setObjectName("Nick");
        Nick->setMaxLength(32767);

        gridLayout_3->addWidget(Nick, 0, 0, 1, 1);

        KomunikatyGeneral = new QTextEdit(MyWidget);
        KomunikatyGeneral->setObjectName("KomunikatyGeneral");
        KomunikatyGeneral->setGeometry(QRect(10, 100, 771, 211));
        KomunikatyGeneral->setFont(font);
        disconnectBtn = new QPushButton(MyWidget);
        disconnectBtn->setObjectName("disconnectBtn");
        disconnectBtn->setGeometry(QRect(810, 530, 757, 61));
        QWidget::setTabOrder(Wiadomosc, sendBtn);

        retranslateUi(MyWidget);

        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWidget)
    {
        MyWidget->setWindowTitle(QCoreApplication::translate("MyWidget", "Simple TCP client", nullptr));
        connectGroup->setTitle(QString());
        hostLineEdit->setText(QCoreApplication::translate("MyWidget", "localhost", nullptr));
        conectBtn->setText(QCoreApplication::translate("MyWidget", "Connect", nullptr));
        talkGroup->setTitle(QString());
        sendBtn->setText(QCoreApplication::translate("MyWidget", "send", nullptr));
        exitBtn->setText(QCoreApplication::translate("MyWidget", "exit", nullptr));
        Menu->setTitle(QString());
        rulesBtn->setText(QCoreApplication::translate("MyWidget", "Rules", nullptr));
        joinBtn->setText(QCoreApplication::translate("MyWidget", "Join game", nullptr));
        NickGroup->setTitle(QString());
        nickBtn->setText(QCoreApplication::translate("MyWidget", "Confirm nick", nullptr));
        disconnectBtn->setText(QCoreApplication::translate("MyWidget", "Disconnect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H

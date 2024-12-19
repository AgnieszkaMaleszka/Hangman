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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QGroupBox *connectGroup;
    QHBoxLayout *horizontalLayout;
    QLineEdit *hostLineEdit;
    QSpinBox *portSpinBox;
    QPushButton *conectBtn;
    QGroupBox *talkGroup;
    QLineEdit *Wiadomosc;
    QPushButton *sendBtn;
    QTextEdit *Wisielec;
    QTextEdit *Haslo;
    QTextEdit *Ranking;
    QTextEdit *Komunikaty;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName("MyWidget");
        MyWidget->resize(761, 433);
        connectGroup = new QGroupBox(MyWidget);
        connectGroup->setObjectName("connectGroup");
        connectGroup->setGeometry(QRect(9, 9, 741, 54));
        horizontalLayout = new QHBoxLayout(connectGroup);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        hostLineEdit = new QLineEdit(connectGroup);
        hostLineEdit->setObjectName("hostLineEdit");

        horizontalLayout->addWidget(hostLineEdit);

        portSpinBox = new QSpinBox(connectGroup);
        portSpinBox->setObjectName("portSpinBox");
        portSpinBox->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::PlusMinus);
        portSpinBox->setMinimum(1);
        portSpinBox->setMaximum(65535);
        portSpinBox->setValue(2000);

        horizontalLayout->addWidget(portSpinBox);

        conectBtn = new QPushButton(connectGroup);
        conectBtn->setObjectName("conectBtn");

        horizontalLayout->addWidget(conectBtn);

        talkGroup = new QGroupBox(MyWidget);
        talkGroup->setObjectName("talkGroup");
        talkGroup->setEnabled(false);
        talkGroup->setGeometry(QRect(9, 69, 743, 355));
        Wiadomosc = new QLineEdit(talkGroup);
        Wiadomosc->setObjectName("Wiadomosc");
        Wiadomosc->setGeometry(QRect(12, 317, 361, 26));
        sendBtn = new QPushButton(talkGroup);
        sendBtn->setObjectName("sendBtn");
        sendBtn->setGeometry(QRect(380, 320, 80, 26));
        Wisielec = new QTextEdit(talkGroup);
        Wisielec->setObjectName("Wisielec");
        Wisielec->setGeometry(QRect(20, 20, 351, 191));
        Haslo = new QTextEdit(talkGroup);
        Haslo->setObjectName("Haslo");
        Haslo->setGeometry(QRect(20, 220, 351, 70));
        Ranking = new QTextEdit(talkGroup);
        Ranking->setObjectName("Ranking");
        Ranking->setGeometry(QRect(390, 20, 341, 191));
        Komunikaty = new QTextEdit(talkGroup);
        Komunikaty->setObjectName("Komunikaty");
        Komunikaty->setGeometry(QRect(390, 220, 341, 70));
        QWidget::setTabOrder(portSpinBox, hostLineEdit);
        QWidget::setTabOrder(hostLineEdit, conectBtn);
        QWidget::setTabOrder(conectBtn, Wiadomosc);
        QWidget::setTabOrder(Wiadomosc, sendBtn);

        retranslateUi(MyWidget);

        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWidget)
    {
        MyWidget->setWindowTitle(QCoreApplication::translate("MyWidget", "Simple TCP client", nullptr));
        connectGroup->setTitle(QString());
        hostLineEdit->setText(QCoreApplication::translate("MyWidget", "localhost", nullptr));
        conectBtn->setText(QCoreApplication::translate("MyWidget", "connect", nullptr));
        talkGroup->setTitle(QString());
        sendBtn->setText(QCoreApplication::translate("MyWidget", "send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *serialsum;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *BaudRateBox;
    QPushButton *OpenCom;
    QPushButton *AdvancedOpen;
    QLabel *label_4;
    QLabel *label_5;
    QTextEdit *Rxtext;
    QTextEdit *txtext;
    QLabel *gif_dance;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *ClearRX;
    QPushButton *pushButton_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *change16View;
    QCheckBox *AddTimekBox;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QPushButton *clearsend;
    QPushButton *senddata;
    QCheckBox *change16send;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(603, 644);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        formLayoutWidget = new QWidget(centralWidget);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 350, 160, 106));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        serialsum = new QComboBox(formLayoutWidget);
        serialsum->setObjectName(QStringLiteral("serialsum"));

        formLayout->setWidget(0, QFormLayout::FieldRole, serialsum);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        BaudRateBox = new QComboBox(formLayoutWidget);
        BaudRateBox->setObjectName(QStringLiteral("BaudRateBox"));
        BaudRateBox->setLayoutDirection(Qt::LeftToRight);

        formLayout->setWidget(1, QFormLayout::FieldRole, BaudRateBox);

        OpenCom = new QPushButton(formLayoutWidget);
        OpenCom->setObjectName(QStringLiteral("OpenCom"));

        formLayout->setWidget(2, QFormLayout::FieldRole, OpenCom);

        AdvancedOpen = new QPushButton(formLayoutWidget);
        AdvancedOpen->setObjectName(QStringLiteral("AdvancedOpen"));

        formLayout->setWidget(3, QFormLayout::FieldRole, AdvancedOpen);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 10, 54, 12));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 470, 54, 12));
        Rxtext = new QTextEdit(centralWidget);
        Rxtext->setObjectName(QStringLiteral("Rxtext"));
        Rxtext->setGeometry(QRect(13, 30, 331, 301));
        txtext = new QTextEdit(centralWidget);
        txtext->setObjectName(QStringLiteral("txtext"));
        txtext->setGeometry(QRect(10, 490, 331, 91));
        gif_dance = new QLabel(centralWidget);
        gif_dance->setObjectName(QStringLiteral("gif_dance"));
        gif_dance->setGeometry(QRect(380, 30, 206, 316));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(180, 350, 163, 25));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ClearRX = new QPushButton(horizontalLayoutWidget);
        ClearRX->setObjectName(QStringLiteral("ClearRX"));

        horizontalLayout->addWidget(ClearRX);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        horizontalLayoutWidget_2 = new QWidget(centralWidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(180, 380, 161, 21));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        change16View = new QCheckBox(horizontalLayoutWidget_2);
        change16View->setObjectName(QStringLiteral("change16View"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(8);
        change16View->setFont(font);

        horizontalLayout_2->addWidget(change16View);

        AddTimekBox = new QCheckBox(horizontalLayoutWidget_2);
        AddTimekBox->setObjectName(QStringLiteral("AddTimekBox"));
        AddTimekBox->setFont(font);

        horizontalLayout_2->addWidget(AddTimekBox);

        formLayoutWidget_2 = new QWidget(centralWidget);
        formLayoutWidget_2->setObjectName(QStringLiteral("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(180, 400, 162, 80));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        clearsend = new QPushButton(formLayoutWidget_2);
        clearsend->setObjectName(QStringLiteral("clearsend"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, clearsend);

        senddata = new QPushButton(formLayoutWidget_2);
        senddata->setObjectName(QStringLiteral("senddata"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, senddata);

        change16send = new QCheckBox(formLayoutWidget_2);
        change16send->setObjectName(QStringLiteral("change16send"));
        change16send->setFont(font);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, change16send);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 603, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243\345\217\267\357\274\232", 0));
#ifndef QT_NO_ACCESSIBILITY
        serialsum->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        label_2->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207\357\274\232", 0));
        BaudRateBox->clear();
        BaudRateBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1200", 0)
         << QApplication::translate("MainWindow", "2400", 0)
         << QApplication::translate("MainWindow", "4800", 0)
         << QApplication::translate("MainWindow", "9600", 0)
         << QApplication::translate("MainWindow", "19200", 0)
         << QApplication::translate("MainWindow", "38400", 0)
         << QApplication::translate("MainWindow", "57600", 0)
         << QApplication::translate("MainWindow", "115200", 0)
        );
        OpenCom->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", 0));
        AdvancedOpen->setText(QApplication::translate("MainWindow", "\351\253\230\347\272\247\350\256\276\347\275\256", 0));
        label_4->setText(QApplication::translate("MainWindow", "\346\216\245\346\224\266\346\225\260\346\215\256", 0));
        label_5->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\346\225\260\346\215\256", 0));
        gif_dance->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        ClearRX->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\346\216\245\346\224\266\345\214\272", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "\346\211\251\345\261\225", 0));
        change16View->setText(QApplication::translate("MainWindow", "16\350\277\233\345\210\266\346\230\276\347\244\272", 0));
        AddTimekBox->setText(QApplication::translate("MainWindow", " \346\230\276\347\244\272\346\227\266\351\227\264\346\210\263", 0));
        clearsend->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\345\217\221\351\200\201", 0));
        senddata->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\346\225\260\346\215\256", 0));
        change16send->setText(QApplication::translate("MainWindow", "16\350\277\233\345\210\266\345\217\221\351\200\201", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

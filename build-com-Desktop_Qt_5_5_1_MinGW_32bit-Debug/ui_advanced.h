/********************************************************************************
** Form generated from reading UI file 'advanced.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADVANCED_H
#define UI_ADVANCED_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Advanced
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *CheckFlag;
    QLabel *label_2;
    QComboBox *stopselect;
    QLabel *label_3;
    QComboBox *DataNum;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *Allow;
    QPushButton *Cancel;

    void setupUi(QDialog *Advanced)
    {
        if (Advanced->objectName().isEmpty())
            Advanced->setObjectName(QStringLiteral("Advanced"));
        Advanced->resize(221, 252);
        formLayoutWidget = new QWidget(Advanced);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(30, 30, 151, 151));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        CheckFlag = new QComboBox(formLayoutWidget);
        CheckFlag->setObjectName(QStringLiteral("CheckFlag"));

        formLayout->setWidget(0, QFormLayout::FieldRole, CheckFlag);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        stopselect = new QComboBox(formLayoutWidget);
        stopselect->setObjectName(QStringLiteral("stopselect"));

        formLayout->setWidget(1, QFormLayout::FieldRole, stopselect);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        DataNum = new QComboBox(formLayoutWidget);
        DataNum->setObjectName(QStringLiteral("DataNum"));

        formLayout->setWidget(2, QFormLayout::FieldRole, DataNum);

        horizontalLayoutWidget = new QWidget(Advanced);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 190, 158, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Allow = new QPushButton(horizontalLayoutWidget);
        Allow->setObjectName(QStringLiteral("Allow"));

        horizontalLayout->addWidget(Allow);

        Cancel = new QPushButton(horizontalLayoutWidget);
        Cancel->setObjectName(QStringLiteral("Cancel"));

        horizontalLayout->addWidget(Cancel);


        retranslateUi(Advanced);

        QMetaObject::connectSlotsByName(Advanced);
    } // setupUi

    void retranslateUi(QDialog *Advanced)
    {
        Advanced->setWindowTitle(QApplication::translate("Advanced", "Dialog", 0));
        label->setText(QApplication::translate("Advanced", "\346\240\241\351\252\214\344\275\215", 0));
        CheckFlag->clear();
        CheckFlag->insertItems(0, QStringList()
         << QApplication::translate("Advanced", "0", 0)
        );
        label_2->setText(QApplication::translate("Advanced", "\345\201\234\346\255\242\344\275\215", 0));
        stopselect->clear();
        stopselect->insertItems(0, QStringList()
         << QApplication::translate("Advanced", "1", 0)
         << QApplication::translate("Advanced", "1.5", 0)
         << QApplication::translate("Advanced", "2", 0)
        );
        label_3->setText(QApplication::translate("Advanced", "\346\225\260\346\215\256\344\275\215", 0));
        DataNum->clear();
        DataNum->insertItems(0, QStringList()
         << QApplication::translate("Advanced", "8", 0)
        );
        Allow->setText(QApplication::translate("Advanced", "\347\241\256\345\256\232", 0));
        Cancel->setText(QApplication::translate("Advanced", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class Advanced: public Ui_Advanced {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADVANCED_H

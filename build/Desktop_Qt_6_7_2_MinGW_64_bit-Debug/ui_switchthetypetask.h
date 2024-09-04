/********************************************************************************
** Form generated from reading UI file 'switchthetypetask.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SWITCHTHETYPETASK_H
#define UI_SWITCHTHETYPETASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SwitchTheTypeTask
{
public:
    QComboBox *comboBox;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *SwitchTheTypeTask)
    {
        if (SwitchTheTypeTask->objectName().isEmpty())
            SwitchTheTypeTask->setObjectName("SwitchTheTypeTask");
        SwitchTheTypeTask->resize(400, 300);
        SwitchTheTypeTask->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 242, 193);\n"
""));
        comboBox = new QComboBox(SwitchTheTypeTask);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(80, 120, 241, 51));
        comboBox->setStyleSheet(QString::fromUtf8("color: black ;"));
        pushButton = new QPushButton(SwitchTheTypeTask);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(160, 200, 88, 26));
        pushButton->setStyleSheet(QString::fromUtf8("color: black ;"));
        label = new QLabel(SwitchTheTypeTask);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 50, 191, 41));
        label->setStyleSheet(QString::fromUtf8("color: black ;"));

        retranslateUi(SwitchTheTypeTask);

        QMetaObject::connectSlotsByName(SwitchTheTypeTask);
    } // setupUi

    void retranslateUi(QWidget *SwitchTheTypeTask)
    {
        SwitchTheTypeTask->setWindowTitle(QCoreApplication::translate("SwitchTheTypeTask", "Form", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("SwitchTheTypeTask", "Pessoal", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("SwitchTheTypeTask", "Acad\303\252mico", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("SwitchTheTypeTask", "Profissional", nullptr));

        pushButton->setText(QCoreApplication::translate("SwitchTheTypeTask", "OK", nullptr));
        label->setText(QCoreApplication::translate("SwitchTheTypeTask", "Escolha o tipo de sua tarefa", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SwitchTheTypeTask: public Ui_SwitchTheTypeTask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SWITCHTHETYPETASK_H

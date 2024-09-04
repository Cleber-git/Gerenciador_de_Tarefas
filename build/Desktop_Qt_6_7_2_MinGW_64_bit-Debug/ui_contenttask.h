/********************************************************************************
** Form generated from reading UI file 'contenttask.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTENTTASK_H
#define UI_CONTENTTASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_ContentTask
{
public:
    QLineEdit *lineEdit;
    QDateEdit *dateEdit;
    QComboBox *comboBox;
    QTextEdit *textEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *ContentTask)
    {
        if (ContentTask->objectName().isEmpty())
            ContentTask->setObjectName("ContentTask");
        ContentTask->resize(400, 631);
        ContentTask->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 199, 167);"));
        lineEdit = new QLineEdit(ContentTask);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(120, 160, 161, 28));
        lineEdit->setStyleSheet(QString::fromUtf8("color: black ;"));
        dateEdit = new QDateEdit(ContentTask);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(120, 400, 161, 29));
        dateEdit->setStyleSheet(QString::fromUtf8("color: black ;"));
        comboBox = new QComboBox(ContentTask);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(120, 90, 111, 28));
        comboBox->setStyleSheet(QString::fromUtf8("color: black ;"));
        textEdit = new QTextEdit(ContentTask);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(120, 260, 161, 91));
        textEdit->setStyleSheet(QString::fromUtf8("color: black ;"));
        label = new QLabel(ContentTask);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 70, 71, 20));
        label->setStyleSheet(QString::fromUtf8("color: black ;"));
        label_2 = new QLabel(ContentTask);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(120, 140, 41, 20));
        label_2->setStyleSheet(QString::fromUtf8("color: black ;"));
        label_3 = new QLabel(ContentTask);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(120, 240, 51, 20));
        label_3->setStyleSheet(QString::fromUtf8("color: black ;"));
        label_4 = new QLabel(ContentTask);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(120, 380, 63, 20));
        label_4->setStyleSheet(QString::fromUtf8("color: black ;"));

        retranslateUi(ContentTask);

        QMetaObject::connectSlotsByName(ContentTask);
    } // setupUi

    void retranslateUi(QDialog *ContentTask)
    {
        ContentTask->setWindowTitle(QCoreApplication::translate("ContentTask", "Dialog", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("ContentTask", "Urgente", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("ContentTask", "Cr\303\255tico", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("ContentTask", "Normal", nullptr));

        label->setText(QCoreApplication::translate("ContentTask", "Prioridade:", nullptr));
        label_2->setText(QCoreApplication::translate("ContentTask", "Titulo:", nullptr));
        label_3->setText(QCoreApplication::translate("ContentTask", "Corpo:", nullptr));
        label_4->setText(QCoreApplication::translate("ContentTask", "Prazo:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ContentTask: public Ui_ContentTask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTENTTASK_H

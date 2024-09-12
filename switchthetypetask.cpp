#include "switchthetypetask.h"
#include "ui_switchthetypetask.h"

SwitchTheTypeTask::SwitchTheTypeTask(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SwitchTheTypeTask)
{
    ui->setupUi(this);
}

SwitchTheTypeTask::~SwitchTheTypeTask()
{
    delete ui;
}

void SwitchTheTypeTask::on_pushButton_clicked()
{
    emit sendTypeTask(ui->comboBox->currentText());
    m_contentTask->show();
    destroy();
}

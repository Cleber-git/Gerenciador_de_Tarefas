#include "contenttask.h"
#include "ui_contenttask.h"

ContentTask::ContentTask(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ContentTask)
{
    ui->setupUi(this);
}

ContentTask::~ContentTask()
{
    delete ui;
}

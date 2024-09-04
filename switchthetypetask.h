#ifndef SWITCHTHETYPETASK_H
#define SWITCHTHETYPETASK_H

#include <QWidget>

#include "contenttask.h"

namespace Ui {
class SwitchTheTypeTask;
}

class SwitchTheTypeTask : public QWidget
{
    Q_OBJECT

public:
    explicit SwitchTheTypeTask(QWidget *parent = nullptr);
    ~SwitchTheTypeTask();
signals:
    void sendTypeTask(QString);
private slots:
    void on_pushButton_clicked();

private:
    Ui::SwitchTheTypeTask *ui;
    ContentTask * m_contentTask = new ContentTask();
};

#endif // SWITCHTHETYPETASK_H

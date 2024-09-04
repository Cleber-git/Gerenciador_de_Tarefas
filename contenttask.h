#ifndef CONTENTTASK_H
#define CONTENTTASK_H

#include <QDialog>


namespace Ui {
class ContentTask;
}

class ContentTask : public QDialog
{
    Q_OBJECT

public:
    explicit ContentTask(QWidget *parent = nullptr);
    ~ContentTask();

private:
    Ui::ContentTask *ui;
};

#endif // CONTENTTASK_H

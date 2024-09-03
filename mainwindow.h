#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "switchthetypetask.h"
#include "tarefa.h"
#include "tipotarefafabrica.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
public slots:
    void on_receive_typeTask(QString);

private:
    Ui::MainWindow *ui;
    SwitchTheTypeTask *m_switchType = new SwitchTheTypeTask();
    QString m_typeOfTask;
    Tarefa *m_tarefa;
    TipoTarefaFabrica m_tipoTarefaFabrica;
};
#endif // MAINWINDOW_H

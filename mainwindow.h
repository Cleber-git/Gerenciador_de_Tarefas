#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "tarefa.h"
#include "FabricaTarefas/tipotarefafabrica.h"
#include "contenttask.h"



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
public slots:
    void receiveType(TipoTarefaFabrica::TAREFA);
private slots:
    void on_pushButton_clicked();
private:
    Ui::MainWindow *ui;
    QString m_typeOfTask;
    Tarefa *m_tarefa;

    ContentTask *m_contentTask = new ContentTask();
};
#endif // MAINWINDOW_H

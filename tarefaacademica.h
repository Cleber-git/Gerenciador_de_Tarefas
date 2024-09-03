#ifndef TAREFAACADEMICA_H
#define TAREFAACADEMICA_H

#include "tarefa.h"
#include <QString>

class TarefaAcademica : public Tarefa
{
    QString m_infoTarefa;
    QString m_prioridade;
    QString m_dataVencimento;
public:
    TarefaAcademica();
    void setInfoTarefa() override;
    void setPrioridade() override;
    void setDataVencimento() override;
};

#endif // TAREFAACADEMICA_H

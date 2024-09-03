#ifndef TIPOTAREFAABSTRATA_H
#define TIPOTAREFAABSTRATA_H

#include "tarefa.h"

class TipoTarefaFabrica: public Tarefas{


public:
    enum class TAREFA{
        PESSOAL,
        PROFISSIONAL,
        ACADEMICA
    };
    virtual Tarefas criarTarefa(TAREFA type);

};
#endif // TIPOTAREFAABSTRATA_H

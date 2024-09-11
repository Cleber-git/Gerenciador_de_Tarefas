#ifndef TIPOTAREFAABSTRATA_H
#define TIPOTAREFAABSTRATA_H


#include "FabricaTarefas/Dependencias/tarefaacademica.h"
#include "FabricaTarefas/Dependencias/tarefapessoal.h"
#include "FabricaTarefas/Dependencias/tarefaprofissional.h"
#include "FabricaTarefas/Dependencias/tarefa.h"

class TipoTarefaFabrica{
public:
    TipoTarefaFabrica();
    enum class TAREFA{
        PESSOAL,
        PROFISSIONAL,
        ACADEMICA
    };

    Tarefa* criarTarefa(TAREFA type);

};
#endif // TIPOTAREFAABSTRATA_H

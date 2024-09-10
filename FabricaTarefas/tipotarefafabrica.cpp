#include "tipotarefafabrica.h"
#include "FabricaTarefas/Dependencias/tarefa.h"
#include "FabricaTarefas/Dependencias/tarefaacademica.h"
#include "FabricaTarefas/Dependencias/tarefapessoal.h"
#include "FabricaTarefas/Dependencias/tarefaprofissional.h"

#include <QString>

TipoTarefaFabrica::TipoTarefaFabrica(){

}

Tarefa *TipoTarefaFabrica::criarTarefa(TAREFA type){
    switch(type){
    case TAREFA::ACADEMICA:
        return new TarefaAcademica();
    case TAREFA::PESSOAL:
        return new TarefaPessoal();
    case TAREFA::PROFISSIONAL:
        return new TarefaProfissional();
    default:
        return nullptr;
    }
}


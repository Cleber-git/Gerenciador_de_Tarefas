#include "tipotarefafabrica.h"
#include "tarefaacademica.h"
#include "tarefaprofissional.h"
#include "tarefapessoal.h"

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




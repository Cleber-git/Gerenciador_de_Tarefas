#include "tipotarefafabrica.h"


#include <QString>

TipoTarefaFabrica::TipoTarefaFabrica(){

}

Tarefa *TipoTarefaFabrica::criarTarefa(TAREFA type){
    Tarefa *instance;
    switch(type){
    case TAREFA::ACADEMICA:
        instance = new TarefaAcademica();
        break;
    case TAREFA::PESSOAL:
        instance = new TarefaPessoal();
        break;
    case TAREFA::PROFISSIONAL:
        instance = new TarefaProfissional();
        break;
    default:
        instance = nullptr;
    }
    return instance;
}


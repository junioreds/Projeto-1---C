#include <stdio.h>
#include "lib.h"


void limpaBuffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int Menu(){
    printf("Opcao 1 = Cadastrar nova tarefa: \n");
    printf("Opcao 2 = Listar tarefas: \n");    
    printf("Opcao 3 = Deletar tarefa: \n");
    printf("Opcao 4 = Salvar tarefa: \n");
    printf("Opcao 0 = Sair do codigo: \n");
    printf("Qual opcao deseja: ");
}

int cadastrarTarefas(ListaDeTarefas *lt){
    printf("Defina a prioridade da tarefa (0 a 10): ");
    scanf("%d", &lt->tarefas[lt->qtd].prioridade);
    limpaBuffer();
    printf("Defina a descricao da tarefa: ");
    fgets(lt->tarefas[lt->qtd].descricao, 300, stdin);
    lt->tarefas[lt->qtd].descricao[strcspn(lt->tarefas[lt->qtd].descricao, "\n")] == '\0';
    printf("Defina a categoria da tarefa: ");
    fgets(lt->tarefas[lt->qtd].categoria, 100, stdin);
    lt->tarefas[lt->qtd].categoria[strcspn(lt->tarefas[lt->qtd].categoria, "\n")] == '\0';
    lt->qtd++;
    printf("\n");
}

int listarTarefas(ListaDeTarefas lt){
    if (lt.qtd == 0){
        printf("Nenhuma tarefa cadastrada.\n");
    };

    for(int i = 0; i < lt.qtd; i++){
        printf("Tarefa %d\n", i + 1);
        printf("Prioridade da tarefa: %d\n", lt.tarefas[i].prioridade);
        printf("Descricao da tarefa: %s\n", lt.tarefas[i].descricao);
        printf("Categoria da tarefa: %s\n", lt.tarefas[i].categoria);
    }
}

int deletarTarefas(ListaDeTarefas *lt){
    if (lt->qtd == 0){
        printf("Nenhuma tarefa cadastrada.\n");
        return 0;
    };

    
    printf("Escolha o número da tarefa que deseja alterar (1 a %d): ", lt->qtd);
    int numeroTarefa;
    scanf("%d", &numeroTarefa);

    if (numeroTarefa < 1 || numeroTarefa > lt->qtd){
        printf("Numero selecionado invalido.\n");
        return 0;
    }

    for (int i = numeroTarefa; i < lt->qtd - 1; i++){
        lt->tarefas[i] = lt->tarefas[i + 1];
    }

    lt->qtd--;
    printf("Tarefa deletada com sucesso.\n");

    return 0;
}

int salvarTarefas(){
    printf("Ola\n");
}

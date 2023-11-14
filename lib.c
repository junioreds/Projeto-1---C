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
    printf("Defina a prioridade da tarefa (0 a 10): \n");
    scanf("%d", &lt->tarefas[lt->qtd].prioridade);
    limpaBuffer();
    printf("Defina a descricao da tarefa: \n");
    fgets(lt->tarefas[lt->qtd].descricao, 300, stdin);
    lt->tarefas[lt->qtd].descricao[strcspn(lt->tarefas[lt->qtd].descricao, "\n")] == '\0';
    printf("Defina a categoria da tarefa: \n");
    fgets(lt->tarefas[lt->qtd].categoria, 100, stdin);
    lt->tarefas[lt->qtd].categoria[strcspn(lt->tarefas[lt->qtd].categoria, "\n")] == '\0';
    lt->qtd++;
    printf("\n");
}

int listarTarefas(ListaDeTarefas lt){
    printf("Ola\n");
}

int deletarTarefas(){
    printf("Ola\n");
}

int salvarTarefas(){
    printf("Ola\n");
}

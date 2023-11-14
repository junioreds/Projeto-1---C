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

int cadastrarTarefas(){
    printf("Ola\n");
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

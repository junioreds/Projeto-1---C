#include <stdio.h>
#include "lib.h"

int main(){
    ListaDeTarefas lt;
    lt.qtd = 0;

    int opcao;
    while(1){
        Menu();
        scanf("%d", &opcao);

        if (opcao == 0){
            break;
        } else if (opcao == 1) { 
           cadastrarTarefas();
        } else if (opcao == 2) {
            listarTarefas();
        } else if (opcao == 3) {
            deletarTarefas();
        } else if (opcao == 4) {
            salvarTarefas();
        } else {
            printf("Opcao nao disponivel");
        }
    }
}
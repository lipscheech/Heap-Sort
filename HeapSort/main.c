#include "Heap.h"

int main(){

    int *vet, tam;

    printf("Digite quantos elementos irao ser inseridos na estrutura para ordenar: \n");
    scanf("%d", &tam);
    printf("Digite seus valores: \n");
    vet = (int *) malloc(tam*sizeof(int));
    for(int i = 0; i < tam; i++){
        scanf("%d", &vet[i]);
    }
    printf("Aplicando o heap sort\n");
    heap(vet, tam);
    printf("\nestrutura ordenada\n");
    printVetor(vet, tam);
    free(vet);
    return 0;

}

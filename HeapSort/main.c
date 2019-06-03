#include "Heap.c"

int main(){

    int *vet, tam;

    printf("Digite quantos elementos irao ser inseridos na estrutura para ordenar: \n");
    scanf("%d", &tam);
    printf("Digite seus valores: \n");
    vet = (int *) malloc(tam*sizeof(int)); //vetor dinamico
    for(int i = 0; i < tam; i++){
        scanf("%d", &vet[i]);
    }
    heap(vet, tam);
    printf("\nestrutura ordenada\n");
    printVetor(vet, tam);
    free(vet);
    return 0;

}

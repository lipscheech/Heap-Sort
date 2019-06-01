#include "Heap.h"

void Swap(int* a, int* b){ //funcao para fazer a troca dos elementos em determinadas posicoes
    int aux = *a;
    *a = *b;
    *b = aux;
 }

void Heapfy(int* vet, int i, int n){
    int aux = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if((l < n) && (vet[l] > vet[aux])){
        aux = l;
    }
    if((r < n) && (vet[r] > vet[aux])){
        aux = r;
    }
    if(aux != i){
        Swap(&vet[i], &vet[aux]);
        Heapfy(vet, aux, n);
    }
}

void heap(int* vet, int n){ //recebe o vetor e seu tamanho
    int i, aux;
    for(i = n  / 2 - 1; i >= 0; i--){ //o loop percorre a metade do vetor ate a primeira posicao
        Heapfy(vet, i, n); //e chamaa funcao para criar a heap
    }
    for(i = n -1; i >= 0; i--){
        Swap(&vet[0], &vet[i]);
        Heapfy(vet, 0, i - 1); //cria de novo a heap
    }
}

void printVetor(int* vet, int n){ //funcao para imprimir o vetor
    for(int i = 0; i < n; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");
}



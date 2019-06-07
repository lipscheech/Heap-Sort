#include "Heap.h"

void Swap(int* a, int* b){ 
    int aux = *a;
    *a = *b;
    *b = aux;
 }

void Heapfy(int* vet, int i, int n){
    int aux = i;
    int l = 2 * i;
    int r = 2 * i + 1;

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

void heap(int* vet, int n){
    int i, aux;
    for(i = n  / 2 - 1; i >= 0; i--){
        Heapfy(vet, i, n);
    }
    for(i = n -1; i >= 0; i--){
        Swap(&vet[0], &vet[i]);
        Heapfy(vet, 0, i - 1);
    }
}

void printVetor(int* vet, int n){
    for(int i = 0; i < n; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");
}



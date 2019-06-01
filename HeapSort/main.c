#include "Heap.c"

int main(){

    int vet[5], i, n;
    for(i = 0; i < 5; i++){
        scanf("%d", &vet[i]);
    }

    n = sizeof(vet) / sizeof(vet[0]);

    heap(vet, n);
    printVetor(vet, n);

    return 0;

}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Ex 1: Leia um vetor de 10 números e exiba o maior e o menor.
    int vetor[10] = {37, 82, 15, 64, 98, 23, 47, 56, 71, 9};

    int maior = vetor[0];
    int menor = vetor[0];

    for(int i = 0; i < 10; i ++) {
        if (vetor[i] > maior){
           maior = vetor[i];
        } else {
           menor = vetor[i];
        }
    }

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}

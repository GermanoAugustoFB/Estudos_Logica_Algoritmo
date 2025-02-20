#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[5];
    int aux, contador;


    printf("Entre com cinco numeros para preencher o array, e pressione enter após digitar cada um:\n");

    for(int i = 0; i < 5; i++){
        scanf("%d", &vetor[i]);
    }

    printf("Ordem atual dos itens no array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%4d", vetor[i]);
    }

    for(contador = 1; contador < 5; contador++){
        for(int i = 0; i < 5 - 1;  i++ ){
            if(vetor[i] > vetor[i + 1]){
                aux = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = aux;
            }
        }
    }

    printf("\nElementos do array ordenados bubble sort:\n");
    for (int i = 0; i < 5; i++) {
        printf("%4d", vetor[i]);
    }

    return 0;
}

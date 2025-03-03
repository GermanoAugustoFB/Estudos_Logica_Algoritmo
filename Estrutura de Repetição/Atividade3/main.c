#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Ex 3: Calcule a soma de todos os números ímpares entre 1 e 50.
    int soma = 0;

    for(int i = 1; i <= 50; i++){
        if(i % 2 == 1) {
            soma += i;
        }
    }

    printf("soma dos impares: %d \n", soma);

    return 0;
}

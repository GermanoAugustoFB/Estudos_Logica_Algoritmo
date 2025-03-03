#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Ex 2: Leia um número e exiba sua tabuada de 1 a 10.
    int contador = 0, mult;
    printf("Tabuada do 10 \n");
    while(contador < 10) {
        contador++;
        mult = contador * 10;
        printf("%d * 10 = %d \n", contador, mult);
    }

    return 0;
}

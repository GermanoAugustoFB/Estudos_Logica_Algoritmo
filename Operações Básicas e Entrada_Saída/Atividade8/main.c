#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Ex 8: Leia dois números e exiba o maior.
    int  val1, val2;

    printf("Informe o valor 1: ");
    scanf("%d", &val1);
    printf("Informe o valor 2: ");
    scanf("%d", &val2);

    if (val1 > val2){
        printf("O maior valor e: %d\n", val1);
    } else {
        printf("O maior valor e: %d\n", val2);
    }

    return 0;
}

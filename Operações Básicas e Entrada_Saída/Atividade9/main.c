#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Ex 9: Leia três números e exiba o menor.
    int  val1, val2;

    printf("Informe o valor 1: ");
    scanf("%d", &val1);
    printf("Informe o valor 2: ");
    scanf("%d", &val2);

    if (val1 > val2){
        printf("O menor valor e: %d\n", val2);
    } else {
        printf("O menor valor e: %d\n", val1);
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Ex 10: Leia um n�mero e verifique se � positivo, negativo ou zero.
    int  num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num > 0) {
        printf("Positivo\n");
    } else if (num < 0){
        printf("Negativo\n");
    } else {
         printf("Zero\n");
    }

    return 0;
}

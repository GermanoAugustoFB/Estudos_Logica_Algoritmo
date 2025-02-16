#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Ex 6: Leia um número e verifique se é par ou ímpar.
    int  num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("Par");
    } else {
        printf("Impar");
    }

    return 0;
}

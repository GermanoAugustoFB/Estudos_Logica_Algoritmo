#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Ex 1: Verifique se um ano é bissexto.
    int ano;

    printf("Informe um ano: ");
    scanf("%d", &ano);

    if((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0){
        printf("Ano bissexto");
    } else {
        printf("Esse ano nao e bissexto");
    }

    return 0;
}

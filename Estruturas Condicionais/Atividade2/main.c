#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Ex 2: Desenvolva um programa que leia um n�mero de 1 a 7 e imprima o dia da semana correspondente.
    int dia;

    printf("Informe um numero de 1 a 7: ");
    scanf("%d", &dia);

    switch(dia) {
        case 1:
            printf("Domingo");
            break;
        case 2:
            printf("Segunda-Feira");
            break;
        case 3:
            printf("Ter�a-Feira");
            break;
        case 4:
            printf("Quarta-Feira");
            break;
        case 5:
            printf("Quinta-Feira");
            break;
        case 6:
            printf("Sexta-Feira");
            break;
        case 7:
            printf("Sabado");
            break;
        default:
            printf("N�mero inv�lido! Digite um n�mero entre 1 e 7.\n");

    }

    return 0;
}

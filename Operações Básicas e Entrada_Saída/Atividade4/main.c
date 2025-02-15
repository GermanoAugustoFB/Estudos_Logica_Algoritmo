#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Ex 4: Converta graus Celsius para Fahrenheit.
    float C, F;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &C);

    F = C * 1.8 + 32;

    printf("Temperatura em Fahrenheit: %.2f\n", F);

    return 0;
}

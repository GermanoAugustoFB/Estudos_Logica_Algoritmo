#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Ex 3: Crie um programa que calcule o IMC de uma pessoa e informe sua classificação.
    float peso, IMC, altura;

    printf("Informe seu peso(kg): ");
    scanf("%f", &peso);
    printf("Informe sua altura(m): ");
    scanf("%f", &altura);

    IMC = peso / pow(altura, 2);

    printf("\nSeu IMC é: %.2f\n", IMC);

    if (IMC < 16) {
        printf("Classificação: Magreza grave\n");
    } else if (IMC >= 16 && IMC <= 16.9) {
        printf("Classificação: Magreza moderada\n");
    } else if (IMC >= 17 && IMC <= 18.4) {
        printf("Classificação: Magreza leve\n");
    } else if (IMC >= 18.5 && IMC <= 24.9) {
        printf("Classificação: Peso normal\n");
    } else if (IMC >= 25 && IMC <= 29.9) {
        printf("Classificação: Sobrepeso\n");
    } else if (IMC >= 30 && IMC <= 34.9) {
        printf("Classificação: Obesidade grau 1\n");
    } else if (IMC >= 35 && IMC <= 39.9) {
        printf("Classificação: Obesidade grau 2 (severa)\n");
    } else {
        printf("Classificação: Obesidade grau 3 (mórbida)\n");
    }

    return 0;
}

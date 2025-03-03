#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Ex 4: Faça um algoritmo que receba três lados de um triângulo e informe se ele é equilátero, isósceles ou escaleno.
    int lado1, lado2, lado3;

    printf("Informe o lado 1 do triangulo: ");
    scanf("%d", &lado1);
    printf("Informe o lado 2 do triangulo: ");
    scanf("%d", &lado2);
    printf("Informe o lado 3 do triangulo: ");
    scanf("%d", &lado3);

    if (lado1 == lado2 && lado2 == lado3) {
        printf("Triangulo Equilatero\n");
    } else if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3) {
        printf("Triangulo Escaleno\n");
    } else {
        printf("Triangulo Isosceles\n");
    }

    return 0;
}

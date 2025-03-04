#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Ex 7: Leia um número e exiba o quadrado e o cubo.
    int  num, quadrado, cubo;

    printf("Digite um numero: ");
    scanf("%d", &num);

    quadrado = pow(num, 2);
    cubo     = pow(num, 3);

    printf("Quadrado: %d\nCubo: %d\n", quadrado, cubo);
    return 0;
}

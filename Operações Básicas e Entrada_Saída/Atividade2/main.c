#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Ex 2: Leia tr�s n�meros e calcule a m�dia.
    float n1, n2, n3, media;

    printf("Digite tres numeros: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3;

    printf("Media: %.2f\n", media);

    return 0;
}

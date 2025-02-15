#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Ex 5: Leia um número e exiba seu antecessor e sucessor.
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    printf("Antecessor: %d, Sucessor: %d\n", num - 1, num + 1);
    return 0;
}

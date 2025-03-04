#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Ex 4 : Leia um número N e exiba os N primeiros números da sequência de Fibonacci.
    int N;

    printf("Insira um numero: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("O numero deve ser maior que zero.\n");
        return 1;
    }

    int a = 0, b = 1, fibo;

    printf("Numeros da sequencia de Fibonacci: ");


    for(int i = 0; i < N; i++){
        if (i == 0) {
            printf("%d ", a);
        } else if (i == 1) {
            printf("%d ", b);
        } else {
            fibo = a + b;
            a = b;
            b = fibo;
            printf("%d ", fibo);
        }
    }

    return 0;
}

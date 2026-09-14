#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero inteiro nao-negativo (0 a 20): ");
    scanf("%d", &n);

    int fatorial = 1;

    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }

    printf("%d! = %d\n", n, fatorial);

    return 0;
}

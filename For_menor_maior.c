#include <stdio.h>

int main() {
    int numero, maior, menor;

    printf("Digite o 1o numero: ");
    scanf("%d", &numero);

    maior = numero;
    menor = numero;

    for (int i = 2; i <= 20; i++) {
        printf("Digite o %do numero: ", i);
        scanf("%d", &numero);

        if (numero > maior) {
            maior = numero;
        }

        if (numero < menor) {
            menor = numero;
        }
    }

    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}

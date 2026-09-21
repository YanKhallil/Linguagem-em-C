#include <stdio.h>

int main(void) {
    int n;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Quantidade invalida.\n");
        return 1;
    }

    int soma = 0;
    int maior, menor;
    int valor;

    for (int i = 0; i < n; i++) {
        printf("Digite o %do numero: ", i + 1);
        scanf("%d", &valor);

        soma += valor;

        if (i == 0) {
            maior = valor;
            menor = valor;
        } else {
            if (valor > maior) maior = valor;
            if (valor < menor) menor = valor;
        }
    }

    double media = (double) soma / n;

    printf("\n--- Resultados ---\n");
    printf("Soma:  %d\n", soma);
    printf("Media: %.2f\n", media);
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);

    return 0;
}
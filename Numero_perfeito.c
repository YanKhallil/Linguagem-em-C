#include <stdio.h>

int main() {
    int num;
    int soma_divisores = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num) ;

    // Soma todos os divisores proprios (de 1 ate num / 2)
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            soma_divisores += i;
        }
    }

    // Compara a soma com o numero original
    if (soma_divisores == num) {
        printf("%d e um numero perfeito.\n", num);
    } else {
        printf("%d nao e um numero perfeito (soma dos divisores = %d).\n", num, soma_divisores);
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    int dividendo, divisor;

    printf("Digite o dividendo: ");
    scanf("%d", &dividendo);

    printf("Digite o divisor: ");
    scanf("%d", &divisor);

    // Divisao por zero e indeterminada
    if (divisor == 0) {
        printf("Erro: divisao por zero nao e permitida.\n");
        return 1;
    }

    int a = llabs((int)dividendo);
    int b = llabs((int)divisor);
    int quociente = 0;

    while (a >= b) {
        a = a - b;
        quociente++;
    }

    printf("Quociente da divisao: %d\n", quociente);

    return 0;
}

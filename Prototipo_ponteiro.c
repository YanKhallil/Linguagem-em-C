#include <stdio.h>

// Recebe ENDEREÇOS das variáveis
void trocaPorReferencia(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Dentro da funcao (por referencia): *a=%d, *b=%d\n", *a, *b);
}

int main(void) {
    int x = 10, y = 20;

    printf("Antes:  x=%d, y=%d\n", x, y);
    trocaPorReferencia(&x, &y);   // passa os endereços com &
    printf("Depois: x=%d, y=%d\n", x, y);  // MUDOU!

    return 0;
}

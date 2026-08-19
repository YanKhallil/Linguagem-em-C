// Online C compiler to run C program online
#include <stdio.h>

int main() {

    //Declaração de variáveis
    int A, B, C;

    //Entrada de dados
    printf("digite o valores: ");
    scanf("%d %d %d", &A, &B, &C);


   if (A > B && A > C) {
        if (B > C) {
            printf("A: %d, B: %d, C: %d\n", A, B, C);
        } else {
            printf("A: %d, C: %d, B: %d\n", A, C, B);
        }
    } else if (B > A && B > C) {
        if (A > C) {
            printf("B: %d, A: %d, C: %d\n", B, A, C);
        } else {
            printf("B: %d, C: %d, A: %d\n", B, C, A);
        }
    } else {
        if (A > B) {
            printf("C: %d, A: %d, B: %d\n", C, A, B);
        } else {
            printf("C: %d, B: %d, A: %d\n", C, B, A);
        }
    }

    return 0;

}

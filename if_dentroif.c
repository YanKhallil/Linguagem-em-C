// Online C compiler to run C program online

//If heterogena ou seja if dentro de if
#include <stdio.h>

int main() {
    int A, B, C;

    printf("digite o valor de A: ");
    scanf("%d", &A);
    printf("digite o valor de B: ");
    scanf("%d", &B);
    printf("digite o valor de C: ");
    scanf("%d", &C);

    if(A<(B+C) && B<(A+C) && C<(A+B)){
        if(A == B && A == C && B == C){
            printf("\no triangulo é Equilatero");

        }else{
            if(A != B && A != C && B != C){
                printf("O triangulo é Escaleno");
            }else{
                printf("O triangulo é Isoceles");
            }
        }


    }else{
        printf("Não pode ser triangulo");
    }

    return 0;
}

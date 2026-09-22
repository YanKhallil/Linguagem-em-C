#include <stdio.h>

int main() {
   int nota;
    printf("Digite a nota (0 a 100): ");
    scanf("%d", &nota);

    if(nota >= 0 && nota <=100){
        if(nota >= 90){
            printf("Conceito A\n");
        } else{
            if(nota >= 70){
                printf("Conceito B\n");
            } else{
                if(nota>=50){
                    printf("Conceito C\n");
                } else {
                    printf("reprovado\n");
                }
            }
        }
    } else{
        printf("Nota invalida\n");
    }

    return 0;
}

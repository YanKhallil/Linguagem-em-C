#include <stdio.h>

    int main(){
        int numero1;
        int numero2;
        int soma;
        int divisao;
        int multiplicacao;
        int subtracao;

        printf("informe o primeiro numero: ");
        scanf("%d", &numero1);

        printf("informe o segundo numero: ");
        scanf("%d", &numero2);

        soma = numero1 + numero2;
        printf("\nsoma: %d", soma);

        multiplicacao = numero1 * numero2;
        printf("\nmultiplicacao: %d", multiplicacao);

        divisao = numero1 / numero2;
        printf("\ndivisao: %d", divisao);

        subtracao = numero1 - numero2;
        printf("\nsubtracao: %d", subtracao);

        return 0;
    }

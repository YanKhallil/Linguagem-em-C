#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){



/*9) Faça um programa que receba um número inteiro, calcule e imprima:
• a raiz quadrada desse número;
• esse número elevado ao quadrado.*/

    // declarcao de variaveis
    int numero, potencia = 0, raiz= 0; //incializacao

    // entrada de dados
    printf("Digite o numero para ser elevado e sua raiz: ");
    scanf("%d", &numero);

    //processamento
    potencia = pow(numero, 2);
    raiz = sqrt(numero);

    // saida de dados
    printf("O resultado da potencia: %d e da raiz: %d", potencia, raiz);







/*8) Faça um algoritmo que receba o valor do salário de um funcionário e o valor do salário mínimo. Calcule e
imprima quantos salários mínimos ganha esse funcionário.*/

/*9) Faça um algoritmo que calcule e imprima a área das seguintes figuras geométricas:
• triângulo; quadrado; círculo; trapézio; retângulo; losango.*/

/*10) Calcular e exibir a área de um quadrado a partir do valor de sua diagonal que será digitado.*/
    printf("Hello world!\n");




    return 0;
}

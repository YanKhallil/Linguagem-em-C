#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){



/*9) Faça um programa que receba um número inteiro, calcule e imprima:
• a raiz quadrada desse número;
• esse número elevado ao quadrado.*/

    // declarcao de variaveis
  /*  int numero, potencia = 0, raiz= 0; //incializacao

    // entrada de dados
    printf("Digite o numero para ser elevado e sua raiz: ");
    scanf("%d", &numero);

    //processamento
    potencia = pow(numero, 2);
    raiz = sqrt(numero);

    // saida de dados
    printf("O resultado da potencia: %d e da raiz: %d", potencia, raiz);*/





/*8) Faça um algoritmo que receba o valor do salário de um funcionário e o valor do salário mínimo. Calcule e
imprima quantos salários mínimos ganha esse funcionário.*/

      // declarcao de variaveis
   /* float salario, salario_minimo, quant = 0; //incializacao

    // entrada de dados
    printf("Digite o seu salario: ");
    scanf("%f", &salario);
    printf("Digite o salario minimo: ");
    scanf("%f", &salario_minimo);

    //processamento
    quant = salario/salario_minimo;

    // saida de dados
    printf("A quantidade de salario minimos e: %.1f", quant);*/



/*9) Faça um algoritmo que calcule e imprima a área das seguintes figuras geométricas:
• triângulo; quadrado; círculo; trapézio; retângulo; losango.*/

/*

    // declarcao de variaveis
    float base_maior, base_menor, base, altura, lado, raio, diagonal_maior, diagonal_menor;
    const float PI = 3.14;
   float Atrinagulo = 0, Aquadrado = 0, Acirculo = 0, Atrapezio = 0, Aretangulo = 0, Alosango = 0; //incializacao

    // entrada de dados
    printf("Digite o valor da base: ");
    scanf("%f", &base);
    printf("Digite o valor da base maior: ");
    scanf("%f", &base_maior);
    printf("Digite o valor da base menor: ");
    scanf("%f", &base_menor);
    printf("Digite o valor da altura: ");
    scanf("%f", &altura);
    printf("Digite o valor do lado: ");
    scanf("%f", &lado);
    printf("Digite o valor o raio: ");
    scanf("%f", &raio);
    printf("Digite o valor da diagonal maior: ");
    scanf("%f", &diagonal_maior);
    printf("Digite o valor da diagonal menor: ");
    scanf("%f", &diagonal_menor);

    //processamento
    Atrinagulo = (base*altura)/2;
    Aquadrado = pow(lado, 2);
    Acirculo = pow(raio, 2)*PI;
    Atrapezio = ((base_maior + base_menor) * altura)/2;
    Aretangulo= base * altura;
    Alosango = (diagonal_maior * diagonal_menor) /2;

    // saida de dados
    printf("A area do triangulo e: %.1f\n A area do quadrado e: %.1f\n A area do circulo e: %.1f\n A area do trapezio e: %.1f\n A area do retangulo e: %.1f\n A area do losango e: %.1f\n", Atrinagulo, Aquadrado, Acirculo, Atrapezio, Aretangulo, Alosango);

*/


/*10) Calcular e exibir a área de um quadrado a partir do valor de sua diagonal que será digitado.*/

    //declaracao de variaveis
    float diagonal, lado = 0, area = 0; // incializacao

    //entrada de dados
    printf("Digite o valor da diagonal: ");
    scanf("%f", &diagonal);

    // processamento
    lado = (diagonal * sqrt(2))/2;
    area = pow(lado, 2);

    //saida de dados
    printf("O valor da area do quadrado e: %.2f", area);


    return 0;
}

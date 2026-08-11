#include <stdio.h>
#define COTACAO_DOLAR 5.18
#define TAXA_IOF 0.0638 //IOF = 6.38%

int main(){

    //Declaracao de variaveis
    float valorReal = 0, valorDolar, valorIOF=0, valorLiquido = 0; //incializacao

    //entrada de dados
    printf("Digite o valor do dolar: ");
    scanf("%f", &valorDolar);

    //processamento
    valorReal = valorDolar * COTACAO_DOLAR;
    valorIOF = valorReal * TAXA_IOF;
    valorLiquido = valorReal - valorIOF;

    //saida de dados
    printf("DOLAR: %.2f, REAL: %.2f, IOF: %.2f, VALOR LIQUIDO: %.2f.", valorDolar, valorReal, valorIOF, valorLiquido);

return 0;
}

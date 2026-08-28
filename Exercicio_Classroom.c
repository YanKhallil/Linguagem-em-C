#include <stdio.h>
BURRO
int main(){
    //Declaracao de variaveis
    float valor_produto, valor_de_entrada = 0, saldo_devedor = 0, parcela = 0; //incializacao
    const float PERCENTUAL = 0.3;

    //Entrada de dados
    printf("Digite o valor do produto: ");
    scanf("%f", &valor_produto);

    //Processamento
    valor_de_entrada = PERCENTUAL * valor_produto;
    saldo_devedor = valor_produto - valor_de_entrada;
    parcela = saldo_devedor/3;

    //Saida de dados
    printf("Entrada: R$%.2f, Parcela: R$%.2f, ", valor_de_entrada, parcela);

return 0;
}


# Tá tudo errado, nã t´´a certo, não faz sentido
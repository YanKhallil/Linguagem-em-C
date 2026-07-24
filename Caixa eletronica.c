#include <stdio.h>

int main(){

    int saque, saldo, opcao, deposito;;
    printf("Digite o valor do saldo: ");
    scanf("%d", &saldo);

    printf("Escolha uma opção:\n1.Depositar Dinheiro. \n2.Sacar Dinheiro.\n");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:

            printf("Digite a quantidade que deseja depositar: ");
            scanf("%d", &deposito);

            saldo += deposito;//saldo = saldo + deposito;
            printf("saldo atual: %d", saldo);
            break;

        case 2:
            printf("Digite o valor do saque: ");
            scanf("%d", &saque);


            if (saldo %100 % 100 %10){
                printf("Nao aceita");
                return 0;
            }
            if(saque>saldo){
                printf("saldo insuficiente");
                return 0;
            }
            else{
                int nota100, nota50, nota20;
                    nota100 = saque/100;

                if(saque%100%50==10){
                    nota20 = ((saque%100)/20);
                }
                else{
                    nota50 = (saque%100)/50;
                    nota20 = ((saque%100)%50)/20;
                }
                printf("Voce recebera nota de 100: %d\n nota de 50: %d\n nota de 20: %d\n", nota100, nota50, nota20);
            }

        break;
        default:
            printf("Voce digitou errado");


    }











    return 0;
    }

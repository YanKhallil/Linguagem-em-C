#include <stdio.h>

int main(){

int total,pagamento, troco,desconto, opcao;

 printf("Quer desconto? 1.Sim 2.Nao ");
 scanf("%d", &opcao);

printf("Digite o total a pagar: ");
scanf("%d", &total);


switch(opcao){
    case 1:

        desconto = total - (total*15/100);

        printf("seu total com desconto e: %d\n",desconto);

        printf("Digite o pagamento: ");
        scanf("%d", &pagamento);

        troco = pagamento - desconto;

        if(desconto > pagamento){
                printf("Valor Insuficiente");
            return 0;


        } else{
            if(desconto < pagamento){
                printf("O valor do troco e: %d", troco);

            } else{
                printf("Pagamento Efetuado");
            }
        }
        return 0;
        break;

    case 2:

        printf("Digite o pagamento: ");
        scanf("%d", &pagamento);

        troco = pagamento - total;

    if(total > pagamento){
            printf("Valor Insuficiente");
        return 0;


    } else{
        if(total < pagamento){
            printf("O valor do troco e: %d", troco);

        } else{
            printf("Pagamento Efetuado");
        }
    }
    break;
}



 return 0;
}

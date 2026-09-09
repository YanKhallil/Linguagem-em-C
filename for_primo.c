#include<stdio.h>
#include<math.h>

int main(){
/*a) Construa um programa em C que verifique se um numero fornecido pelo usuário é primo ou não*/
    //declaracao de variaveis
 /*   int num;
    int cont = 0;

    printf("Entre com um numero inteiro positivo: ");
    scanf("%d", &num);

    //Processamento
    for(int i = 1; i<= num; i++){
        if(num % i == 0){
            cont++;
        }
    }

    //saida de dados
    if (cont==2){
        printf("O numero %d e primo\n", num);

    } */



   /* int numero;
    long long raiz = 0;

    printf("Digite o numero: ");
    scanf("%d", &numero);

    raiz = round(sqrt(numero));
    printf("O resultado da raiz %d", raiz);*/



     int numero, inverter1=0, inverter2=0, inverter3=0;

    printf("Digite os numero  de tres digitos: ");
    scanf("%d", &numero);

    /* OU inverter1 = numero /100;
    inverter2 = (numero%100)/10;
    inverter3 = (numero%100)%10;*/

    inverter1= numero%10;
    inverter2= (numero/10)%10;
    inverter3= (numero/10)/10;

   /* OU inverter1= numero/100;
    inverter2= (numero/10)%10;
    inverter3= numero%10;*/


    printf("%d", inverter1 *100 + inverter2 *10 + inverter3);

   /* int numero, cont =0;

    for(int i = 1; i<=20; i++){

            printf("Digite 20 numeros inteiro: ");
            scanf("%d", &numero);

    }

    if(numero>numero){

    }*/

    return 0;
}

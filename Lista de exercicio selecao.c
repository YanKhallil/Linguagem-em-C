#include <stdio.h>

int main(){

    /*Questao 1: Desenvolva um programa que simule um caixa eletrônico. O usuário deve inserir o valor que deseja sacar
e o programa deve informar quantas notas de cada valor serão entregues (considere notas de R$100,
R$50, R$20 e R$10).*/

    /*int saque;

    printf("Digite o valor do saque: ");
    scanf("%d", &saque);

    int notadecem = saque/100;
    int notadecinquenta = saque/50;
    int notadevinte = saque/20;
    int notadedez = saque/10;

    if(saque>=100){
            printf("Notas de 100: %d\n", notadecem);
            printf("Notas de 50: %d\n", notadecinquenta);
            printf("Notas de 20: %d\n",notadevinte);
            printf("Notas de 10: %d\n", notadedez);

    }else if(saque>=50){
                printf("Notas de 50: %d\n", notadecinquenta);
                printf("Notas de 20: %d\n",notadevinte);
                printf("Notas de 10: %d\n", notadedez);
            }
    else if(saque>=20){
                printf("Notas de 20: %d\n",notadevinte);
                printf("Notas de 10: %d\n", notadedez);
            }
    else if(saque>=10){
                printf("Notas de 10: %d\n", notadedez);
    } else {
        printf("Nao possuimos o valor");
    } */

/*QUestao 2: Faça um programa que simule uma calculadora simples. O usuário deve inserir dois números e escolher
a operação a ser realizada (adição, subtração, multiplicação ou divisão)*/

   /* int primeiro_numero, segundo_numero;
    char operacao;

    printf("Digite o operacao A-adicao S-subtracao M-multiplicacao D-divisao: ");
    scanf("%c", &operacao);

    printf("Digite o primeiro numero: ");
    scanf("%d", &primeiro_numero);

    printf("Digite o segundo numero: ");
    scanf("%d", &segundo_numero);



    switch (operacao){
        case 'A':
            int soma = primeiro_numero + segundo_numero;
            printf("Resultado da soma: %d", soma);
            break;
        case 'S':
            int subtracao = primeiro_numero - segundo_numero;
            printf("Resultado da subtracao: %d", subtracao);
            break;
        case 'M':
            int multiplicacao = primeiro_numero * segundo_numero;
            printf("Resultado da multiplicacao: %d", multiplicacao);
            break;
        case 'D':
            int divisao = primeiro_numero / segundo_numero;
            printf("Resultado da divisao: %d", divisao);
        break;
        default:
            printf("Invalido"); */


/*Questao 3: Existem três árvores em frente a casa de João, A1, A2 e A3, elas possuem as seguintes alturas,
respectivamente, H1, H2 e H3. Faça um programa que mostre a maior e menor árvore.*/

   /* int arvore1;
    int arvore2;
    int arvore3;

    printf("Digite o tamanho da arvore1: ");
    scanf("%d", &arvore1);

    printf("Digite o tamanho da arvore2: ");
    scanf("%d", &arvore2);

    printf("Digite o tamanho da arvore3: ");
    scanf("%d", &arvore3);

    if(arvore1 > arvore2 && arvore1> arvore3){
            printf("tamanho da arvore1: %d\n", arvore1);
            if(arvore2 > arvore3){
                printf("tamanho da arvore2: %d\n", arvore2);
                printf("tamanho da arvore3: %d\n", arvore3);
            } if(arvore3>arvore2){
                printf("tamanho da arvore3: %d\n", arvore3);
                printf("tamanho da arvore2: %d\n", arvore2);
            }
    }

    if(arvore2 > arvore1 && arvore2> arvore3){
            printf("tamanho da arvore2: %d\n", arvore2);
            if(arvore1 > arvore3){
                printf("tamanho da arvore1: %d\n", arvore1);
                printf("tamanho da arvore3: %d\n", arvore3);
            } if(arvore3>arvore1){
                printf("tamanho da arvore3: %d\n", arvore3);
                printf("tamanho da arvore1: %d\n", arvore1);
            }
    }

    if(arvore3 > arvore1 && arvore3> arvore2){
            printf("tamanho da arvore3: %d\n", arvore3);
            if(arvore2 > arvore1){
                printf("tamanho da arvore2: %d\n", arvore2);
                printf("tamanho da arvore1: %d\n", arvore1);
            } if(arvore1>arvore2){
                printf("tamanho da arvore1: %d\n", arvore1);
                printf("tamanho da arvore2: %d\n", arvore2);

            }
    } */



/* QUESTAO 5: Desenvolva um programa que recebe do usuário, o placar de um jogo de futebol (os gols de cada time)
e informa se o resultado foi um empate, se a vitória foi do primeiro time ou do segundo time*/

    /* int time1, time2;

printf("Digite a quantidade de gols do primeiro time: ");
scanf("%d", &time1);
printf("Digite a quantidade de gols do segundo time: ");
scanf("%d", &time2);

if(time1>time2){
    printf("VItoria do 1 Time!!");
}else if(time2>time1){
    printf("VItoria do 2 Time!!");
} else
    printf("EMPATE"); */









    return 0;
}

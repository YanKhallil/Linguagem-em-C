#include <stdio.h>

int main(){
    // 1 -> Sim
    // 0 -> Não
    int opcao;

    printf("Seu animal é mamifero??\n1.Sim\n2.Não");
    scanf("%d",&opcao);

    // Mamifero
    if(opcao == 1){
        // Processamento para perguntas de Mamifero
        printf("Seu animal mamiferp é quadrupede\n1.Sim\n2.Não");
        scanf("%d",&opcao);
        if (opcao == 1){
            printf("è carnivoro?");
            scanf("%d",&opcao);
            if(opcao == 1){
                printf("Seu animal é Leão");
                return 0;
            }else{
                printf("Seu animal é cavalo");
                return 0;
            }
        }
        printf("Bipede?");
        scanf("%d",&opcao);
        if(opcao == 1){
            // É onivoro ou Frutifero
            printf("Seu animal é onivoro?");
            scanf("%d",&opcao);
            if(opcao == 1){
                printf("Seu animal é Humano");
                return 0;
            }
            else{
                printf("Seu animal é um macaco, frutifero");
                return 0;
            }

        }

    }
    // Ave⁷
    else{
        printf("Seu animal então é ave?\n1.Sim\n2.Não");
        scanf("%d",&opcao);
        if(opcao == 1){
            // Processamento para perguntas de ave
        }
        else{
            // Repteis
            printf("Seu animal então é repteis?\n1.Sim\n2.Não");
            scanf("%d",&opcao);
            if(opcao == 1){
                // Processamento para pergunta repteis
            }
            else{
                printf("QUE ANIMAL É ESSE QUE Tá querendo colocar?");
            }
        }

    }



}

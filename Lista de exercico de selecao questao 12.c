#include <stdio.h>

int main(){
    int idade;

    scanf("%d", &idade);

    if(idade >= 18){
        printf("filmes de 18 anos");
    }
    else
        if(idade >= 16){
            printf("filmes de 16 anos");
        }
        else
        if(idade >= 14){
            printf("filmes de 14 anos");
        }
        else
        if(idade >= 12){
            printf("filmes de 12 anos");
        }
        else
        if(idade >= 10){
            printf("filmes de 10 anos");
        }
        else
            printf("filmes Livre");

    return 0;
}

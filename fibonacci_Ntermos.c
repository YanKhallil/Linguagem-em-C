#include <stdio.h>

int main(){
    int numero;
    int soma=0;
    int soma2 =1;

    printf("Digite os primeiros termos de fibonnaci: ");
    scanf("%d", &numero);
    
    for(int i = 1; i<=numero; i = i + 2){
        printf("%d\n%d\n", soma, soma2);
        soma = soma + soma2;
        soma2 = soma2 + soma;
    }
}

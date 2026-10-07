
#include <stdio.h>

int divisao(int a, int b);

int main() {

    int a, b, resultado;
    
    printf("Digite o dividendo: ");
    scanf("%d", &a);
    printf("Digite o divisor: ");
    scanf("%d", &b);

    resultado = divisao(a, b);


    printf("%d", resultado);
    return 0;
}

int divisao(int a, int b){
    if(b==0){
        return 0;
    } else{
        return (a/b) * b ==a;
    }
}

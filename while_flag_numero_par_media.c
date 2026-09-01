#include <stdio.h>

int main(){
    //declaração de variáveis
   int n, cont = 0, acm = 0;
   float mnp = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    while(n != 0){
        if(n > 0 && n % 2 == 0){
            acm += n;
            cont++;
        }
        printf("Digite um número inteiro positivo: ");
        scanf("%d", &n);  
    }
    if(cont > 0){
        mnp = acm/cont;
        printf("A média dos números pares é: %.2f\n", mnp);
    }else{
        printf("Não foram digitados números pares.\n");
    }
    
    return 0;
}

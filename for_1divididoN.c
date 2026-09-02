#include <stdio.h>

int main(){
    //Declaracao de variaveis
    int n; 
    float H= 0.0f;
    
    //Entrada de dados
    printf("digite o numero N:");
    scanf("%d", &n);

    for(int i = 1;i <=n;i++){
        H+= 1.0f/i;
    }
    printf("O valor de H(%d) e: %.2f", n, H);
    return 0;
}

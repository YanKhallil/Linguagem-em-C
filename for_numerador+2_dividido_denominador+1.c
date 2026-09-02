#include<stdio.h>

int main(){
    //Declaracao de variaveis
    float s = 0.0;
    int num =1;

    for(int i = 1; i<=50; i++){
        s+= (double)num/i;
        num+=2;

    }
    printf("resultado: %.2f\n", s);

    return 0;
}

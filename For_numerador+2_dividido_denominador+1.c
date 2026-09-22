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

    /* 
    double = 0;
    for(int i = 1, j=1; i <= 99; i+=2, j++){
        s = s+(double)i/j;
    }

    printf("O valor da soma e: %.6lf\n", S);
    
    */

    return 0;
}

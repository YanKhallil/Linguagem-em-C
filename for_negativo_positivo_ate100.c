#include <stdio.h>

int main(){
    //declaração de variáveis
    double s = 0.0;

    for(int i = 1;i <= 10;i++){
        double termo = (double)i/(i*i);

        if(i % 2 != 0){
            s += termo;
        }else{
            s -= termo;
        }
    }   
    printf("O valor da soma é: %.6lf\n", s);
    return 0;
}

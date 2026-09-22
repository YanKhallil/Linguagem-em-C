#include <stdio.h>

//protótipo da função
void troca(int, int);

int main(){
    int x =10, y =20;

    printf("Antes: x = %d, y = %d\n",x,y);
    troca(x,y);
    printf("Depois: x = %d, y = %d\n",x,y);

    return 0;
}

void troca(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Dentro da função (Por valor)): a =%d, b = %d\n",a,b);
}

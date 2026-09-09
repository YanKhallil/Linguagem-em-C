#include <stdio.h>
#include <math.h>

int main() {
//MMC
    int num1, num2, a, b, mmc, mdc, resto;

    printf("Entre com o primeiro numero: ");
    scanf("%d", &num1);

    printf("Entre com o primeiro numero: ");
    scanf("%d", &num2);

    a = num1;
    b = num2;

    while(b!=0){
        resto = a%b;
        a = b;
        b =resto;
    }

    mdc =a;

    printf("mdc: %d", mdc);
    
    return 0;
}

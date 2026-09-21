#include<stdio.h>

int lerQuantidade(){
    int n;
    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    return n;
}

int lerValor(int indice){
    int v;
    printf("Digite o %do numero: ", indice + 1);
    scanf("%d", &v);

    return v;
}

int calcularSoma(int n){
    int soma = 0;
    for(int i = 0; i < n; i++){
        soma += leVaor(i);
    }
    return soma;
}

int calcularMaior(int n){
    int maior;
    for(int i = 0; i < n; i++){
        int v = lerValor(i);
        if(i == 0 || v > maior){
            maior = v;
        }
    }
    return maior;
}

int calcularMenor(int n){
    int menor;
    for(int i = 0; i < n; i++){
        int v = lerValor(i);
        if(i == 0 || v < menor){
            menor = v;
        }
    }
    return menor;
}

double calcularMedia(int soma, int n){
    return (double)soma / n;
}

void imprimirResultados(int soma, int maior, int menor, double media){
    printf("Soma: %d\n", soma);
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("Media: %.2f\n", media);
}

int main(){
    int n = lerQuantidade();

    if(n <= 0){
        printf("Quantidade invalida.\n");
        return 1;
    }

    int soma = calcularSoma(n);
    int maior = calcularMaior(n);       
    int menor = calcularMenor(n);
    double media = calcularMedia(soma, n);
    imprimirResultados(soma, maior, menor, media);

    return 0;
}
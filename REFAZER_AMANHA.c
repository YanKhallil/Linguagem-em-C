#include <stdio.h>

void lerNotas(){
    for(int i =0; i<4; i++){
        float nota;
        printf("Digite 4 notas: ");
        scanf("%f", &nota);
        }   
    }

float calcularMedia(){
    float lerNota = lerNotas();
    float media =0;
    media = nota/4;
}

void encontrarMaiorMenor(){
    float lerNota = lerNotas();
    float maior, menor;
    if(maior<menor){
        menor = maior;
    } else {
        maior = menor;
    }
}

void mostrarSituacao(){
    float calcularMedia = calcularMedia();
    float encontrarMaiorMenor = encontrarMaiorMenor();
    printf("Media= %.2f\nMaior nota=%.2f\nMenor nota=%.2f",media, maior, menor);
}

int main(){
    float lerNota = lerNotas();
    float media = calcularMedia();
    float maiorMenor = encontrarMaiorMenor();
    float situacao = mostrarSituacao();
    return 0;
}

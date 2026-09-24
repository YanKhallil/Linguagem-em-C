#include <stdio.h>
//Declaração de variáveis globais
float n1, n2, n3, n4;

//protótipos das funções
void lerNotas();
float calcularMedia(float n1, float n2, float n3, float n4);
float encontrarMaior();
float encontrarMenor();
void mostrarSituacao(float media);
void exibirResultado();

int main(){
    //declaraca de variavaies
    float media=0;
    float maior, menor;

    //Entrada de dados
    lerNotas();
    media = calcularMedia(n1, n2, n3,n4);
    maior = encontrarMaior();
    menor = encontrarMenor();
    exibirResultado();
    printf("Media: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);
    mostrarSituacao(media);
    return 0;
}

void lerNotas(){
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    printf("Digite a quarta nota: ");
    scanf("%f", &n4);
}

float calcularMedia(float n1, float n2, float n3, float n4){
    return (n1 + n2 + n3 + n4) / 4;
}

float encontrarMaior(){
    float maior = n1;
    if(n2 > maior){
        maior = n2;
    }
    if(n3 > maior){
        maior = n3;
    }
    if(n4 > maior){
        maior = n4;
    }
    return maior;
}

float encontrarMenor(){
    float menor = n1;
    if(n2 < menor){
        menor = n2;
    }
    if(n3 < menor){
        menor = n3;
    }
    if(n4 < menor){
        menor = n4;
    }
    return menor;
}

// Mostra a situação do aluno
void mostrarSituacao(float media) {
    if (media >= 7.0) {
        printf("Situacao: APROVADO\n");
    } else if (media >= 5.0) {
        printf("Situacao: RECUPERACAO\n");
    } else {
        printf("Situacao: REPROVADO\n");
    }
}
void exibirResultado() {
    // Exibição dos resultados
    printf("\n-----------------------------------------\n");
    printf("Notas: %.2f, %.2f, %.2f, %.2f\n", n1, n2, n3, n4);
   
   
}

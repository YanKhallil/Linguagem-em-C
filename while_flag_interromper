#include <stdio.h>

/* Crie um programa que recebaa media anual de 
* cada aluno e Calcule a media anual da turma.
* Para finalizar o laço
* use como flag (finalizador) mediaAnual -1
*/

int main(){
    //declaração de variáveis
    float ma = 0, acm = 0, mat = 0;
    int cont = 0;

    while(ma != -1){
        printf("Digite a média anual do aluno: ");
        scanf("%f", &ma);
        if(ma != -1){
            acm += ma;
            cont++;
        }
        if(cont > 0){
            mat = acm / cont;
            printf("Média anual da turma: %.2f\n", mat);    
        }else{
            printf("Nenhum aluno foi registrado.\n");
        }
    }

    return 0;
}

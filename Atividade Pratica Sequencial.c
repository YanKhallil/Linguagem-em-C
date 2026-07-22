  /* Desafios: Média de Notas*/
  #include <stdio.h>

    int main(){
        float n1, n2, n3, media;

        printf("Digite sua 3 notas: ");
        scanf("%f", &n1);
        scanf("%f", &n2);
        scanf("%f", &n3);

        media = (n1 + n2 + n3) / 3;

        printf("media: %.2f\n", media);
        return 0;
    }

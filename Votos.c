#include<stdio.h>

int main(){
    //declaração de variáveis
    int voto;
    int c1 = 0, c2= 0, c3 = 0,c4=0;
    int nulos=0, brancos=0;
    int total_votos=0;
    double pct_nulos = 0, pct_brancos=0, pct_nulos_brancos=0;

    //entrada de votos
    printf("----URNA ELETRÔNICA ----\m");
    printf("1, 2, 3 , 4 : voto nos candidatos 1 a 4\n");
    pritnf("5           : Voto nulo\n");
    printf("6           : Voto em branco\n");
    printf("0           : Encerrar votação\n");
    scanf("%d", &voto);

    while(voto!= 0){
        switch(voto){
            case 1:
                c1++;
                total_votos++;
                break;
            case 2:
                c2++;
                total_votos++;
                break;
            case 3:
                c3++;
                total_votos++;
                break;
            case 4:
                c4++;
                total_votos++;
                break;
            case 5:
                nulos++;
                total_votos++;
                break;
            case 6:
                brancos++;
                total_votos++;
                break;
            default:
                printf("Voto inválido!\n");
        }
        printf("Digite o voto (1, 2, 3, 4) ou 0 para encerrar: ");
        scanf("%d", &voto);

    }
    printf("\n================ RESULTADO ================\n");
    printf("Total Candidato 1: %d\n", c1);
    printf("Total Candidato 2: %d\n", c2);
    printf("Total Candidato 3: %d\n", c3);
    printf("Total Candidato 4: %d\n", c4);
    printf("Total Nulos      : %d\n", nulos);
    printf("Total em Branco  : %d\n", brancos);
    printf("-------------------------------------------\n");
    printf("Total de Votos   : %d\n", total_votos);

    if (total_votos > 0) {
        double pct_nulos = ((double)nulos / total_votos) * 100.0;
        double pct_brancos = ((double)brancos / total_votos) * 100.0;
        double pct_nulos_brancos = ((double)(nulos + brancos) / total_votos) * 100.0;

        printf("Percentual de votos nulos       : %.2f%%\n", pct_nulos);
        printf("Percentual de votos em branco   : %.2f%%\n", pct_brancos);
        printf("Percentual conjunto (nulos + brancos): %.2f%%\n", pct_nulos_brancos);
    } else {
        printf("Nenhum voto valido foi computado.\n");
    }

    return 0;
}

#include <stdio.h>

int main(){
    //declaração de variáveis
   char tipoVinho;
   int tintos = 0, brancos = 0, roses = 0, totalVinhos = 0;
   float percTintos = 0, percBrancos = 0, percRoses = 0;

    printf("***LEVANTAMENTO DO ESTOQUE DA ADEGA\n***");
    
    do{
        printf("\nDigite o tipo de vinho (T - Tinto, B - Branco, R - Rosé) ou F para sair: ");
        scanf(" %c", &tipoVinho);
        switch(tipoVinho){
            case 'T':
            case 't':
                tintos++;
                totalVinhos++;
                break;
            case 'B':
            case 'b':
                brancos++;
                totalVinhos++;
                break;
            case 'R':
            case 'r':
                roses++;
                totalVinhos++;
                break;
            case 'F':
            case 'f':
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Tipo de vinho inválido. Tente novamente.\n");
        }

    }while(tipoVinho != 'F' && tipoVinho != 'f');

    printf("\nLEVANTAMENTO FINAL DO ESTOQUE DA ADEGA\n");
    printf("Total de vinhos: %d\n", totalVinhos);
    printif("Vinhos tintos: %d\n",tintos);
    printf("Vinhos brancos: %d\n", brancos);
    printf("Vinhos rosés: %d\n", roses);

    if(totalVinhos > 0){
        printf("PORCENTAGENS DE CADA TIPO DE VINHO\n");
        printf("percentual de vinhos tintos: %.2f%%\n", (float)tintos / totalVinhos * 100);
       printf("percentual de vinhos brancos: %.2f%%\n", (float)brancos / totalVinhos * 100);
        printf("percentual de vinhos rosés: %.2f%%\n", (float)roses / totalVinhos * 100);
    } else {
        printf("Nenhum vinho registrado.\n");
    }

    return 0;
}


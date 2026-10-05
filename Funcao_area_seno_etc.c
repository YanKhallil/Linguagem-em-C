#include <stdio.h>
#include <math.h>

//protótipos das funções
void exibirTitulo();
void exibirResultado(double resultado);
double calcularAreaCirculo(double raio);
double calcularHipotenusa(double cateto1, double cateto2);
double calcularPotencia(double base, double expoente);
double calcularRaizQuadrada(double numero);    
double converterGrausParaRadianos(double graus);
double calcularSeno(double radianos);
int lerOpcao();

//função principal
int main(){
    int opcao;
    double resultado, raio, cateto1, cateto2, base, expoente,
numero, graus, radianos;

    exibirTitulo();
    do{
        printf("      MENU DE OPCOES\n");
        printf("---------------------------\n");
        printf("1 - Calcular área do círculo\n");
        printf("2 - Calcular hipotenusa\n");
        printf("3 - Calcular potência\n");
        printf("4 - Calcular raiz quadrada\n");
        printf("5 - Calcular seno\n");
        printf("0 - Sair\n");
        printf("---------------------------\n");
        opcao = lerOpcao();
        switch(opcao){
            case 1:
                printf("Digite o raio do círculo: ");
                scanf("%lf", &raio);
                resultado = calcularAreaCirculo(raio);
                exibirResultado(resultado);
                break;
            case 2:
                printf("Digite o valor do primeiro cateto: ");
                scanf("%lf", &cateto1);
                printf("Digite o valor do segundo cateto: ");
                scanf("%lf", &cateto2);
                resultado = calcularHipotenusa(cateto1, cateto2);
                exibirResultado(resultado);
                break;
            case 3:
                printf("Digite a base: ");
                scanf("%lf", &base);
                printf("Digite o expoente: ");  
                scanf("%lf", &expoente);    
                resultado = calcularPotencia(base, expoente);
                exibirResultado(resultado);
                break;
            case 4:
                printf("Digite o número: ");
                scanf("%lf", &numero);

                if(numero >= 0){
                    resultado = calcularRaizQuadrada(numero);
                    exibirResultado(resultado);
                }else{
                    printf("Erro: Não é possível calcular a raiz quadrada de um número negativo.\n");
                }
                break;
            case 5:
                printf("Digite o valor em graus: ");
                scanf("%lf", &graus);
                radianos = converterGrausParaRadianos(graus);
                resultado = calcularSeno(radianos);
                exibirResultado(resultado);
                break;
            case 0:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }while(opcao != 0);



    return 0;
}

void exibirTitulo() {
    printf("CALCULADORA MATEMATICA\n");
}

void exibirResultado(double resultado) {
    printf("Resultado = %.2lf\n", resultado);
}

int lerOpcao() {

    int opcao;

    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    return opcao;
}

double calcularAreaCirculo(double raio){
    return M_PI * pow(raio, 2);
}

double calcularHipotenusa(double cateto1, double cateto2){
    return sqrt(pow(cateto1, 2) + pow(cateto2, 2));
}  

double calcularPotencia(double base, double expoente){
    return pow(base, expoente);
}

double calcularRaizQuadrada(double numero){
    return sqrt(numero);
}

double converterGrausParaRadianos(double graus){
    return graus * (M_PI / 180);
}

double calcularSeno(double radianos){
    return sin(radianos);
}

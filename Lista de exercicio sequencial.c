#include <stdio.h>

int main(){

//Questao 1

   /* int idade;
    int anoatual = 2026;
    int anofuturo = 2034;

    printf("digite dua idade: ");
    scanf("%d", &idade);

    int nascimento = (anoatual - idade);
    int idadefutura = ((anofuturo - anoatual) + idade);

    printf("voce nasceu em: %d\n", nascimento);
    printf("Em 2034 voce tera: %d\n", idadefutura); */



//Questao 2

/* //variavel de espaco
    float pontochegada;
    float pontopartida;

    //variavel de tempo
    float tempofinal;
    float tempoinicial;

    //processamento (desenvolvimento)
    printf("digite, em KM, a distancia inicial: ");
    scanf("%f", &pontopartida);

    printf("digite, em KM a distancia final: ");
    scanf("%f", &pontochegada);

    printf("digite o horario inicial: ");
    scanf("%f", &tempoinicial);

    printf("digite o horario final: ");
    scanf("%f", &tempofinal);

    //calculo da velocidade media
    float velocidademedia= (pontochegada - pontopartida)/(tempofinal - tempoinicial);

    printf("velocidade media e: %2.f\n", velocidademedia); */



//Questao 6: Faça um algoritmo que receba um número binário de 4 dígitos e em seguida converta o valor para decimal
//  • Exemplo: O número binário é 1101 o seu equivalente em decimal é 13.

    // Atribuição de valores na variavel binario
    int binario;

    printf("Digite o numero binario de 4 digitos: ");
    scanf("%d", &binario);

    // Extraindo cada unidade do numero binario

    int Quartobinario = binario/1000;
    int Terceirobinario = binario%1000/100;
    int Segundobinario = binario%1000%100/10;
    int Primeirobinario = binario%1000%100%10;

    // multiplicando cada unidade pela potencia de suas posiçoes da direita para esquerda e depois somando tudo
    // EX: 1101 = (1 * 2 elevado a 3) + (1 * 2 elevado a 2) + (0 * 2 elevado a 1) + (1 * 2 elevado a 0)

    int resultado= (Quartobinario * 8) + (Terceirobinario * 4) + (Segundobinario * 2) + (Primeirobinario * 1);

    printf("O resultado do binario em numero e: %d", resultado);





 //Questao 15
/*

Faça um algoritmo que dado um número de conta corrente com três dígitos, retorne o seu dígito verificador, o qual é calculado da seguinte maneira:
• Exemplo: 125
Somar o número da conta com o seu inverso: 125+ 521 = 646
Multiplicar cada dígito pela sua ordem posicional e somar estes resultados: 6 4 6 1 2 3 6x1   + 4x2   + 6x3 = 32
O último dígito desse resultado é o dígito verificador da conta (32®2)


*/

     /*int numero_conta,centena, decimal, unidade,numero_conta_inverso, soma_agencia, centena_multiplicar,decimal_multiplicar,unidade_multiplicar
    ,digito_verificador = centena_multiplicar + decimal_multiplicar + unidade_multiplicar;

    // Alocando o valor na variavel para numero_conta
    printf("Digite 3 digitos da sua conta: ");
    scanf("%d",&numero_conta);


    // % -> Sempre vai pegar o resultado em RESTO
   // / -> Sempre vai pegar o resultado normal

   // Simplesmente pegando o número de acordo com as casas decimais
    centena  = numero_conta / 100;
    decimal = (numero_conta % 100) / 10;
    unidade = numero_conta % 100 % 10;

    printf("centena: %d\n",centena);
    printf("Decimal: %d\n\n",decimal);
    printf("Unidade é: %d\n\n",unidade);

    // Invertendo
    numero_conta_inverso = (unidade * 100) + (decimal * 10) + centena;



    // Somando a inversão_conta com o número_conta
    soma_agencia = numero_conta + numero_conta_inverso;


    printf("A soma com seu número inverso é: %d\n\n",soma_agencia);


    // Mesmo algoritmo para pegar os números de acordo com casas decimais
    centena_multiplicar  = 1* (soma_agencia / 100);
    decimal_multiplicar = 2* ((soma_agencia % 100) / 10);
    unidade_multiplicar = 3* ((soma_agencia % 100) % 10);

    // Somando de acordo com a multiplicação de cada casa decimal
    digito_verificador = centena_multiplicar + decimal_multiplicar + unidade_multiplicar;
    // Último verificador, de acordo com a ultima alternativa da 15° questão
    int ultimo_digito = digito_verificador % 10;

    //print, mostrando o resultado do ultimo verificador
    printf ("O digito de verificador seu é: %d\n\n",digito_verificador);
    printf ("O digito de verificador seu é: %d\n\n",ultimo_digito);

    //Mostrando a geração da conta corrente:
    printf("Então, a sua conta corrente é: %d%d-%d\n\n",numero_conta,soma_agencia,ultimo_digito); */


        return 0;
}

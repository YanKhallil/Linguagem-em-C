#include <stdio.h>

int main() {
    int n;
    
    printf("Digite o numero de termos (minimo 2): ");
    scanf("%d", &n);

    // Termos iniciais da sequência
    int t1 = 1;
    int t2 = 1;

    // Imprime os dois primeiros termos obrigatórios
    printf("%d %d ", t1, t2);

    // O laço inicia em 3 e vai até n
    for (int contador = 3; contador <= n; contador++) {
        int t3 = t1 + t2;
        printf("%d ", t3);
        
        // Atualização das variáveis para o próximo termo
        t1 = t2;
        t2 = t3;
    }

    printf("\n");
    return 0;
}
/*#include <stdio.h>

int main() {
    int n;

    int t1 = 1, t2 = 1, proximo;

    printf("Digite a quantidade de termos (n): ");
    scanf("%d", &n);
    
    printf("Os %d primeiros termos da sequencia de Fibonacci sao:\n", n);

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d", t1);
        } else if (i == 2) {
            printf(" %d", t2);
        } else {
            proximo = t1 + t2;
            t1 = t2;
            t2 = proximo;
            printf(" %d", proximo);
        }
    }

    printf("\n");
    return 0;
}*/

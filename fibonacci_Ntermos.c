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

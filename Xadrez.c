#include <stdio.h>

int main() {
    int movimentosCavalo;

    // Entrada do número de movimentos em L do Cavalo
    printf("Digite o número de movimentos em L para o Cavalo (2 para baixo e 1 para a esquerda): ");
    scanf("%d", &movimentosCavalo);

    printf("\nMovimento do Cavalo:\n");

    // Loop externo com for (quantidade de movimentos)
    for (int i = 0; i < movimentosCavalo; i++) {
        // Loop interno com while (duas casas para baixo)
        int j = 0;
        while (j < 2) {
            printf("Baixo\n");
            j++;
        }

        // Depois do loop: uma casa para a esquerda
        printf("Esquerda\n");
    }

    return 0;
}

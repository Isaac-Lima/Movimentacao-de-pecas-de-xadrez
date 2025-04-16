#include <stdio.h>

// =======================
// Funções Recursivas
// =======================

// Função recursiva para o movimento da Torre (para a direita)
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para o movimento da Rainha (para a esquerda)
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para o Bispo (com loop aninhado: externa vertical, interna horizontal)
void moverBispo(int linhas, int colunas) {
    if (linhas <= 0 || colunas <= 0) return;

    // Loop externo (vertical = Cima)
    for (int i = 0; i < linhas; i++) {
        // Loop interno (horizontal = Direita)
        for (int j = 0; j < colunas; j++) {
            // Movimenta na diagonal
            printf("Cima Direita\n");
            break; // Apenas uma casa diagonal por iteração
        }
    }
}

// =======================
// Função principal
// =======================
int main() {
    // Quantidade de casas para cada peça
    int casasTorre = 5;
    int casasRainha = 8;
    int linhasBispo = 5;  // movimento vertical
    int colunasBispo = 5; // movimento horizontal (para formar diagonal)
    int movimentosCavalo = 3; // número de "L" que o cavalo fará

    // ---------------------
    // Movimento da Torre
    // ---------------------
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // ---------------------
    // Movimento da Rainha
    // ---------------------
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // ---------------------
    // Movimento do Bispo
    // ---------------------
    printf("\nMovimento do Bispo:\n");
    moverBispo(linhasBispo, colunasBispo);

    // ---------------------
    // Movimento do Cavalo (duas casas para cima, uma para direita)
    // ---------------------
    printf("\nMovimento do Cavalo:\n");

    int lMovimentos = 0;

    // Loop externo para os movimentos em "L"
    for (int i = 0; i < movimentosCavalo; i++) {
        int casasSubidas = 0;

        // Duas casas para cima
        for (int j = 0; j < 2; j++) {
            if (casasSubidas == 1) continue; // simula lógica condicional
            printf("Cima\n");
            casasSubidas++;
        }

        // Uma casa para direita (simulando condição mais complexa)
        for (int k = 0; k < 2; k++) {
            if (k == 0) {
                printf("Direita\n");
                break; // interrompe após um passo
            }
        }

        lMovimentos++;
    }

    return 0;
}

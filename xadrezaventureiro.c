#include <stdio.h>

int main() {
    // ==============================
    // Constantes de movimento
    // ==============================
    const int MOV_TORRE = 5;       // Torre: 5 casas para a direita
    const int MOV_BISPO = 5;       // Bispo: 5 casas na diagonal (Cima Direita)
    const int MOV_RAINHA = 8;      // Rainha: 8 casas para a esquerda
    const int MOV_BAIXO = 2;       // Cavalo: 2 casas para baixo
    const int MOV_ESQUERDA = 1;    // Cavalo: 1 casa para a esquerda
    const int NUM_SALTOS_CAVALO = 3; // Cavalo: número de movimentos em "L"

    // ==============================
    // Movimentação da Torre (for)
    // Direção: Direita
    // ==============================
    printf("Movimentação da Torre (for):\n");
    for (int i = 0; i < MOV_TORRE; i++) {
        printf("Direita\n");
    }

    // ==============================
    // Movimentação do Bispo (while)
    // Direção: Cima Direita
    // ==============================
    printf("\nMovimentação do Bispo (while):\n");
    int j = 0;
    while (j < MOV_BISPO) {
        printf("Cima Direita\n");
        j++;
    }

    // ==============================
    // Movimentação da Rainha (do-while)
    // Direção: Esquerda
    // ==============================
    printf("\nMovimentação da Rainha (do-while):\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < MOV_RAINHA);

    // ==============================
    // Movimentação do Cavalo (for + do-while)
    // Direção: 2x Baixo, 1x Esquerda
    // ==============================
    printf("\nMovimentação do Cavalo (for + do-while):\n");

    for (int s = 0; s < NUM_SALTOS_CAVALO; s++) {
        int i = 0;
        do {
            printf("Baixo\n");
            i++;
        } while (i < MOV_BAIXO);

        int e = 0;
        while (e < MOV_ESQUERDA) {
            printf("Esquerda\n");
            e++;
        }
    }

    return 0;
}

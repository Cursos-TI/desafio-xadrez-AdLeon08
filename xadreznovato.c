#include <stdio.h>

// Constantes para a quantidade de movimentos de cada peça
#define MOV_TORRE 5
#define MOV_BISPO 5
#define MOV_RAINHA 8

int main() {
    // ==============================
    // Movimentação da Torre (for)
    // Direção: Direita (horizontal)
    // ==============================
    printf("Movimentação da Torre (for):\n");
    for (int i = 0; i < MOV_TORRE; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // ==============================
    // Movimentação do Bispo (while)
    // Direção: Diagonal (Cima Direita)
    // ==============================
    printf("Movimentação do Bispo (while):\n");
    int j = 0;
    while (j < MOV_BISPO) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n");

    // ==============================
    // Movimentação da Rainha (do-while)
    // Direção: Esquerda (horizontal)
    // ==============================
    printf("Movimentação da Rainha (do-while):\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < MOV_RAINHA);

    return 0;
}

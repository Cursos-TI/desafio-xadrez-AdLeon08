#include <stdio.h>

// =============================
// Função Recursiva da Torre
// =============================
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// =============================
// Função Recursiva da Rainha
// =============================
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// =============================
// Função Recursiva do Bispo
// + Loop Aninhado (vert/horiz)
// =============================
void moverBispo(int movimentos) {
    if (movimentos == 0) return;

    for (int i = 0; i < 1; i++) { // vertical
        for (int j = 0; j < 1; j++) { // horizontal
            printf("Cima Direita\n");
        }
    }

    moverBispo(movimentos - 1);
}

// =============================
// Movimento do Cavalo
// Loops complexos com break/continue
// 2x Cima, 1x Direita por salto
// =============================
void moverCavalo(int saltos) {
    printf("\nMovimentação do Cavalo (loops aninhados avançados):\n");

    for (int s = 0; s < saltos; s++) {
        int cima = 0;
        int direita = 0;

        for (int i = 0; i < 3; i++) {  // Loop "Cima"
            if (cima >= 2) break;

            if (i % 2 == 0) {  // condição de exemplo
                printf("Cima\n");
                cima++;
            } else {
                continue; // ignora passo desnecessário
            }

            for (int j = 0; j < 2; j++) {  // Loop "Direita"
                if (direita >= 1) break;

                if ((j + i) % 2 == 0) {
                    printf("Direita\n");
                    direita++;
                }
            }
        }
    }
}

// =============================
// Função Principal
// =============================
int main() {
    const int MOV_TORRE = 5;
    const int MOV_BISPO = 4;
    const int MOV_RAINHA = 6;
    const int SALTOS_CAVALO = 3;

    printf("Movimentação da Torre (recursiva):\n");
    moverTorre(MOV_TORRE);

    printf("\nMovimentação do Bispo (recursiva + loop aninhado):\n");
    moverBispo(MOV_BISPO);

    printf("\nMovimentação da Rainha (recursiva):\n");
    moverRainha(MOV_RAINHA);

    moverCavalo(SALTOS_CAVALO);

    return 0;
}

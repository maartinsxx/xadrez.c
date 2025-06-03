#include <stdio.h>

/// Função recursiva para movimentar a Torre (direita)
void moverTorre(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

/// Função recursiva para movimentar a Rainha (esquerda)
void moverRainha(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

/// Função recursiva para o movimento diagonal do Bispo (cima + direita)
void moverBispoRecursivo(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casasRestantes - 1);
}

/// Função com loops aninhados para o Bispo: vertical externa e hori

#include <stdio.h>

// Função recursiva para movimentar a Torre (direita)
void moverTorre(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

// Função recursiva para movimentar a Rainha (esquerda)
void moverRainha(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

// Função recursiva para o movimento diagonal do Bispo (cima + direita)
void moverBispoRecursivo(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casasRestantes - 1);
}

// Função com loops aninhados para o Bispo: vertical externa e horizontal interna
void moverBispoLoopsAninhados(int casasVerticais, int casasHorizontais) {
    int i, j;  // variável declarada fora do for para compatibilidade C89

    for (i = 0; i < casasVerticais; i++) {
        for (j = 0; j < casasHorizontais; j++) {
            printf("Cima\n");
            printf("Direita\n");
        }
    }
}

// Função com loops aninhados complexos para o movimento do Cavalo
void moverCavaloLoopsComplexos() {
    int verticalMoves = 2;   // duas casas para cima
    int horizontalMoves = 1; // uma casa para a direita
    int i, j;

    for (i = 0; i < verticalMoves; i++) {
        int count = 0;
        while (count < 1) {  // controla uma casa para direita depois de dois para cima
            printf("Cima\n");
            count++;
        }
    }

    for (j = 0; j < horizontalMoves; j++) {
        printf("Direita\n");
    }
}

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasBispoVerticais = 3;
    int casasBispoHorizontais = 3;
    int casasRainha = 8;

    // Movimentação da Torre (recursiva)
    moverTorre(casasTorre);
    printf("\n");

    // Movimentação do Bispo (recursiva)
    moverBispoRecursivo(casasBispo);
    printf("\n");

    // Movimentação do Bispo (loops aninhados)
    moverBispoLoopsAninhados(casasBispoVerticais, casasBispoHorizontais);
    printf("\n");

    // Movimentação da Rainha (recursiva)
    moverRainha(casasRainha);
    printf("\n");

    // Movimentação do Cavalo (loops complexos)
    moverCavaloLoopsComplexos();

    return 0;
}

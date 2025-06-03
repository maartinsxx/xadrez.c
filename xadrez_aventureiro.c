#include <stdio.h>

int main() {
    // Simulação dos movimentos das peças de xadrez:
    // Torre, Bispo, Rainha e Cavalo

    // ----------------------------------
    // TORRE: 5 casas para a direita
    // Estrutura: for
    // ----------------------------------
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // ----------------------------------
    // BISPO: 5 casas na diagonal (cima + direita)
    // Estrutura: while
    // ----------------------------------
    printf("Movimento do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n");

    // ----------------------------------
    // RAINHA: 8 casas para a esquerda
    // Estrutura: do-while
    // ----------------------------------
    printf("Movimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    printf("\n");

    // ----------------------------------
    // CAVALO: movimento em "L" (2 para baixo, 1 para a esquerda)
    // Estrutura: for + while (aninhados)
    // ----------------------------------
    printf("Movimento do Cavalo:\n");

    int movimentos = 1; // apenas um movimento em "L"

    for (int m = 0; m < movimentos; m++) {
        int passos_baixo = 0;

        // Primeiro, 2 casas para baixo
        while (passos_baixo < 2) {
            printf("Baixo\n");
            passos_baixo++;
        }

        // Depois, 1 casa para a esquerda
        printf("Esquerda\n");
    }

    return 0;
}

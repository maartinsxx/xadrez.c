#include <stdio.h>

int main() {
    // Simulação da movimentação das peças de xadrez
    // Cada peça usa uma estrutura de repetição diferente:
    // Torre (for), Bispo (while), Rainha (do-while)

    // -------------------------------
    // TORRE - Move-se 5 casas para a direita
    // Estrutura usada: for
    // -------------------------------
    int i;
    printf("Movimento da Torre:\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // -------------------------------
    // BISPO - Move-se 5 casas na diagonal para cima e à direita
    // Estrutura usada: while
    // -------------------------------
    int j = 1;
    printf("Movimento do Bispo:\n");
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n");

    // -------------------------------
    // RAINHA - Move-se 8 casas para a esquerda
    // Estrutura usada: do-while
    // -------------------------------
    int k = 1;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    return 0;
}

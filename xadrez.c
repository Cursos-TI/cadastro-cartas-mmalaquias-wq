#include <stdio.h>

int main() {
    
    // VARIAVEIS DE MOVIMENTOS //
    int torre = 5;
    int rainha = 8;
    int bispo = 5;
    int cavalo = 1;

    // MOVER A TORRE //
    printf("--- Movimento da Torre ---\n");
    for (int i = 0; i < torre; i++) {
        printf("Direita\n");
    }

    // MOVER A RAINHA //
    printf("\n--- Movimento da Rainha ---\n");
    for (int i = 0; i < rainha; i++) {
        printf("Esquerda\n");
    }

    // MOVER O BISPO //
    printf("\n--- Movimento do Bispo ---\n");
    for (int i = 0; i < bispo; i++) {
        printf("Cima Direita\n");
    }

    // MOVER O CAVALO //
    printf("\n--- Movimento do Cavalo ---\n");
    while (cavalo--)
    {
        for (int i = 0; i < 2; i++) {
            printf("Cima\n");
        }
        printf("Direita\n");
    }

    return 0;
}

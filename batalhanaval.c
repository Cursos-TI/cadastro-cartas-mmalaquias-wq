#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};
    int tamanhoNavio = 3;

    // --- POSIÇÃO NAVIOS --- //

    int linhaH = 2, colunaH = 1;
    for (int i = 0; i < tamanhoNavio; i++) tabuleiro[linhaH][colunaH + i] = 3;

    int linhaV = 5, colunaV = 6;
    for (int i = 0; i < tamanhoNavio; i++) tabuleiro[linhaV + i][colunaV] = 3;

    // --- TABULEIRO COM COORDENADAS --- //
    // --- IMPRIME CABEÇALHO (A a J) --- //  
    
    printf("   A B C D E F G H I J\n"); 

    // --- IMPRIME LINHA (1 a 10) --- //

    for (int i = 0; i < 10; i++) {
        
        printf("%2d ", i + 1); 

    // --- IMPRIME CONTEUDO DA LINHA --- //

        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}

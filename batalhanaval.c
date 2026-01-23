#include <stdio.h>

int main() {

    int tabuleiro[10][10] = {0};
    int tamanhoNavio = 3;
    
    // --- DEFINIÇÃO DAS HABILIDADES --- //

    // --- CONE (1) --- //
    // --- (LIN 1, COL 4) PARA BAIXO --- //
    int origLinCone = 1, origColCone = 7;
    for (int i = 0; i < 3; i++) { // --- ALT CONE --- //
        for (int j = -i; j <= i; j++) { // --- LARG CONE --- //
            tabuleiro[origLinCone + i][origColCone + j] = 1;
        }
    }

    // --- CRUZ (2) --- //
    // --- CENTRO (LIN 5, COL 2) --- //
    int centroLinCruz = 5, centroColCruz = 2;
    for (int i = 0; i < 5; i++) {
        tabuleiro[centroLinCruz][(centroColCruz - 2) + i] = 2; // --- LIN CRUZ --- //
        tabuleiro[(centroLinCruz - 2) + i][centroColCruz] = 2; // --- COL CRUZ --- //
    }

    // --- OCTAEDRO (3) --- //
    // CENTRO (LIN 7, COL 7) --- //
    int centroLinOct = 7, centroColOct = 7;
    int raio = 2;
    for (int i = -raio; i <= raio; i++) {
        for (int j = -raio; j <= raio; j++) {
            
            // --- |x| + |y| <= raio --- //
            int dist = (i < 0 ? -i : i) + (j < 0 ? -j : j);
            if (dist <= raio) {
                tabuleiro[centroLinOct + i][centroColOct + j] = 3;
            }
        }
    }

         
    // --- POSIÇÃO NAVIOS --- //


    /* // --- ISOLANDO PARTE DO CODIGO PARA NÃO EXECUTAR E SOBREPOR AS HABILIDADES --- //
    int linhaH = 2, colunaH = 1;
    for (int i = 0; i < tamanhoNavio; i++) tabuleiro[linhaH][colunaH + i] = 3;

    int linhaV = 5, colunaV = 6;
    for (int i = 0; i < tamanhoNavio; i++) tabuleiro[linhaV + i][colunaV] = 3;

    int linhaH = 2, colunaH = 1;
    for (int i = 0; i < tamanhoNavio; i++) tabuleiro[linhaH][colunaH + i] = 3; // --- HOR --- //

    int linhaV = 5, colunaV = 6;
    for (int i = 0; i < tamanhoNavio; i++) tabuleiro[linhaV + i][colunaV] = 3; // --- VER --- //

    int linhaD1 = 0, colunaD1 = 5;
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[linhaD1 + i][colunaD1 + i] = 3; // --- DIAGONAL --- //
    }

    int linhaD2 = 8, colunaD2 = 1;
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiro[linhaD2 - i][colunaD2 + i] = 3; // --- DIAGONAL --- // /
    }
    */ // --- ISOLANDO PARTE DO CODIGO PARA NÃO EXECUTAR E SOBREPOR AS HABILIDADES --- //

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

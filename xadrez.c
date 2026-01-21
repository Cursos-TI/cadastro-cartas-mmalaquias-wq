#include <stdio.h>

// --- MOVIMENTO TORRE --- //
void torre(int casas) {
    
    if (casas > 0) {
        printf ("Direita\n");
        torre(casas - 1);
    }
}

//--- MOVIMENTO RAINHA --- //
void rainha(int casas) {
    
    if (casas > 0) {
        printf ("Esquerda\n");
        rainha(casas - 1);
    }
}

//--- MOVIMENTO BISPO --- //
void bispo(int casas) {
    
    if (casas > 0) {
        printf ("Cima Direita\n");
        bispo(casas - 1);
    }
}

//--- MOVIMENTO CAVALO --- //
void cavalo(int casas) {
    
    if (casas > 0) {
        printf ("Cima\n");
        printf ("Cima\n");
        printf ("Direita\n");
        cavalo(casas - 4);
    }
}

int main() {

    printf("\n--- Movimento da Torre ---\n\n");
    torre(5);
       
    printf("\n--- Movimento Rainha ---\n\n");
    rainha(8);

    printf("\n--- Movimento Bispo ---\n\n");
    bispo(5);

    printf("\n--- Movimento Cavalo ---\n\n");
    cavalo(3);


    return 0;
    
}

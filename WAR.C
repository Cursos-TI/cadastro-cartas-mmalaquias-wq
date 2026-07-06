#include <stdio.h>
#include <string.h>

struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {
    
    // armazenar 5 territórios distintos
    struct Territorio lista_territorios[5];
    
    // --- CADASTRO DOS TERRITÓRIOS (ENTRADA DE DADOS) ---
    printf("=========================================\n");
    printf("      CADASTRO DE TERRITORIOS - WAR      \n");
    printf("=========================================\n\n");
        
    for (int i = 0; i < 5; i++) {
        printf("--- Territorio %d de 5 ---\n", i + 1);
                
        printf("Digite o nome do territorio: ");
        scanf(" %29[^\n]", lista_territorios[i].nome);
        
        printf("Digite a cor do exercito: ");
        scanf(" %9[^\n]", lista_territorios[i].cor);
        
        printf("Digite a quantidade de tropas: ");
        scanf("%d", &lista_territorios[i].tropas);
        
        printf("\n");
    }
    
    // --- EXIBIÇÃO DOS DADOS (SAÍDA DE DADOS) ---

    // requisito de desempenho.
    printf("=========================================\n");
    printf("          TERRITORIOS CADASTRADOS        \n");
    printf("=========================================\n");
    
    // Laço 'for' para percorrer o vetor e imprimir as informações coletadas
    for (int i = 0; i < 5; i++) {
        // Alinhamento à esquerda (%-20s) para manter a tabela visualmente organizada
        printf("Territorio: %-20s | Cor: %-10s | Tropas: %d\n", 
               lista_territorios[i].nome, 
               lista_territorios[i].cor, 
               lista_territorios[i].tropas);
    }
    
    printf("=========================================\n");
    
    return 0;
}

#include <stdio.h>

int main() {
    // VARIÁVEIS CARTA 1
    char Nome_da_Cidade[30];
    int Populacao, Numero_de_Pontos_Turisticos;
    float Area_em_Km2, PIB, densidade_populacional;

    // VARIÁVEIS CARTA 2
    char Nome_da_Cidade2[30];
    int Populacao2, Numero_de_Pontos_Turisticos2;
    float Area_em_Km22, PIB2, densidade_populacional2;

    // VARIÁVEIS DE CONTROLE DO DUELO
    int opcao1, opcao2;
    float valor1_C1, valor2_C1, valor1_C2, valor2_C2;
    float soma1, soma2;
    char *nomeAtributo1, *nomeAtributo2;

    // --- COLETA DE DADOS CARTA 1 ---
    printf("\n--- Cadastro Carta 1 ---\n");
    printf("Nome da Cidade: "); 
    scanf(" %29[^\n]", Nome_da_Cidade);
    printf("População: "); 
    scanf("%d", &Populacao);
    printf("Área (km²): "); 
    scanf("%f", &Area_em_Km2);
    printf("PIB (em bilhões): "); 
    scanf("%f", &PIB);
    printf("Pontos Turísticos: "); 
    scanf("%d", &Numero_de_Pontos_Turisticos);
    densidade_populacional = (Area_em_Km2 > 0) ? (float)Populacao / Area_em_Km2 : 0;

    // --- COLETA DE DADOS CARTA 2 ---
    printf("\n--- Cadastro Carta 2 ---\n");
    printf("Nome da Cidade: "); 
    scanf(" %29[^\n]", Nome_da_Cidade2);
    printf("População: "); 
    scanf("%d", &Populacao2);
    printf("Área (km²): "); 
    scanf("%f", &Area_em_Km22);
    printf("PIB (em bilhões): "); 
    scanf("%f", &PIB2);
    printf("Pontos Turísticos: "); 
    scanf("%d", &Numero_de_Pontos_Turisticos2);
    densidade_populacional2 = (Area_em_Km22 > 0) ? (float)Populacao2 / Area_em_Km22 : 0;

    // --- MENU INTERATIVO: ATRIBUTO 1 ---
    printf("\n=============================\n");
    printf("    ESCOLHA O 1º ATRIBUTO    \n");
    printf("=============================\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Demográfica\n");
    printf("Escolha: ");
    scanf("%d", &opcao1);

    // --- MENU INTERATIVO: ATRIBUTO 2 (DINÂMICO) ---
    printf("\n=============================\n");
    printf("    ESCOLHA O 2º ATRIBUTO    \n");
    printf("=============================\n");
    if (opcao1 != 1) printf("1. População\n");
    if (opcao1 != 2) printf("2. Área\n");
    if (opcao1 != 3) printf("3. PIB\n");
    if (opcao1 != 4) printf("4. Pontos Turísticos\n");
    if (opcao1 != 5) printf("5. Densidade Demográfica\n");
    printf("Escolha: ");
    scanf("%d", &opcao2);

    // Validação de entrada duplicada
    if (opcao1 == opcao2) {
        printf("\n[ERRO] Você não pode selecionar o mesmo atributo duas vezes!\n");
        return 0;
    }

    // --- ATRIBUIÇÃO DE VALORES (SWITCH 1) ---
    switch(opcao1) {
        case 1: valor1_C1 = (float)Populacao; valor1_C2 = (float)Populacao2; nomeAtributo1 = "População"; break;
        case 2: valor1_C1 = Area_em_Km2; valor1_C2 = Area_em_Km22; nomeAtributo1 = "Área"; break;
        case 3: valor1_C1 = PIB; valor1_C2 = PIB2; nomeAtributo1 = "PIB"; break;
        case 4: valor1_C1 = (float)Numero_de_Pontos_Turisticos; valor1_C2 = (float)Numero_de_Pontos_Turisticos2; nomeAtributo1 = "Pontos Turísticos"; break;
        case 5: valor1_C1 = densidade_populacional; valor1_C2 = densidade_populacional2; nomeAtributo1 = "Densidade Demográfica"; break;
        default: printf("Opção 1 inválida!\n"); return 0;
    }

    // --- ATRIBUIÇÃO DE VALORES (SWITCH 2) ---
    switch(opcao2) {
        case 1: valor2_C1 = (float)Populacao; valor2_C2 = (float)Populacao2; nomeAtributo2 = "População"; break;
        case 2: valor2_C1 = Area_em_Km2; valor2_C2 = Area_em_Km22; nomeAtributo2 = "Área"; break;
        case 3: valor2_C1 = PIB; valor2_C2 = PIB2; nomeAtributo2 = "PIB"; break;
        case 4: valor2_C1 = (float)Numero_de_Pontos_Turisticos; valor2_C2 = (float)Numero_de_Pontos_Turisticos2; nomeAtributo2 = "Pontos Turísticos"; break;
        case 5: valor2_C1 = densidade_populacional; valor2_C2 = densidade_populacional2; nomeAtributo2 = "Densidade Demográfica"; break;
        default: printf("Opção 2 inválida!\n"); return 0;
    }

    // --- LÓGICA DE SOMA E RESULTADO ---
    soma1 = valor1_C1 + valor2_C1;
    soma2 = valor1_C2 + valor2_C2;

    printf("\n--- RESULTADO DO DUELO ---\n");
    printf("Cartas: %s vs %s\n\n", Nome_da_Cidade, Nome_da_Cidade2);
    
    printf("Atributo 1: %s\n", nomeAtributo1);
    printf(" - %s: %.2f\n", Nome_da_Cidade, valor1_C1);
    printf(" - %s: %.2f\n\n", Nome_da_Cidade2, valor1_C2);

    printf("Atributo 2: %s\n", nomeAtributo2);
    printf(" - %s: %.2f\n", Nome_da_Cidade, valor2_C1);
    printf(" - %s: %.2f\n\n", Nome_da_Cidade2, valor2_C2);

    printf("SOMA TOTAL:\n");
    printf(" - %s: %.2f\n", Nome_da_Cidade, soma1);
    printf(" - %s: %.2f\n", Nome_da_Cidade2, soma2);
    printf("---------------------------\n");

    // Decisão do Vencedor por Soma
    if (soma1 > soma2) {
        printf("VENCEDOR: %s!\n", Nome_da_Cidade);
    } else if (soma2 > soma1) {
        printf("VENCEDOR: %s!\n", Nome_da_Cidade2);
    } else {
        printf("RESULTADO: Empate!\n");
    }

    return 0;
}

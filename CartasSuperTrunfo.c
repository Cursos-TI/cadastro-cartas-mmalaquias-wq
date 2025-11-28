#include <stdio.h>

int main(){

    // VARIAVEIS //

    int carta1, Carta2, Populacao, Populacao2, Numero_de_Pontos_Turisticos, Numero_de_Pontos_Turisticos2;
    char Estado[3], Codigo_da_Carta[5], Nome_da_Cidade[30], Estado2[3], Codigo_da_Carta2[5], Nome_da_Cidade2[30];
    float Area_em_Km2, PIB, Area_em_Km22, PIB2;
    float densidade_populacional, pib_percapta, densidade_populacional2, pib_percapta2, super_poder1, super_poder2;
    
    // COLETA DE DADOS DA CARTA 1 //

    printf("\n--- Inserção Carta 1 ---\n");

    printf("Digite o Numero da Carta: ");
    scanf("%d", &carta1);

    printf("Digite o Estado: ");
    scanf("%2s", Estado);

    printf("Digite o Código da Carta: ");
    scanf("%4s", Codigo_da_Carta);

    printf("Digite o nome da cidade: ");
    scanf(" %29[^\n]", Nome_da_Cidade);

    printf("Digite a população: ");
    scanf("%d", &Populacao);

    printf("Digite áream em km²: ");
    scanf("%f", &Area_em_Km2);

    printf("Digite o valor do PIB (em bilhões): ");
    scanf("%f", &PIB); 

    printf("Digite o Número de Pontos Turisticos: ");
    scanf("%d", &Numero_de_Pontos_Turisticos);

    // ADICAO CALCULO PIB PERCAPTA E DENSIDADE POPULACIONAL CARTA1 //

    // CHECK BASICO DIVIDE BY 0 //

    if (Area_em_Km2 != 0.0) {
        densidade_populacional = (float)Populacao / Area_em_Km2; 
    } else {
        densidade_populacional = 0.0;
    }
    // CHECK BASICO DIVIDE BY 0 //

    if (Populacao > 0) {
        pib_percapta = (PIB * 1e9) / (float)Populacao;
    } else {
        pib_percapta = 0.0;
    }

    // COLETA DE DADOS DA CARTA 2 //

    printf("\n--- Inserção Carta 2 ---\n");

    printf("Digite o Numero da Carta: ");
    scanf("%d", &Carta2);

    printf("Digite o Estado: ");
    scanf("%2s", Estado2);

    printf("Digite o Código da Carta: ");
    scanf("%4s", Codigo_da_Carta2);

    printf("Digite o nome da cidade: ");
    scanf(" %29[^\n]", Nome_da_Cidade2);

    printf("Digite a população: ");
    scanf("%d", &Populacao2);

    printf("Digite áream em km²: ");
    scanf("%f", &Area_em_Km22);

    printf("Digite o valor do PIB (em bilhões): ");
    scanf("%f", &PIB2); 

    printf("Digite o Número de Pontos Turisticos: ");
    scanf("%d", &Numero_de_Pontos_Turisticos2);

    // ADICAO CALCULO PIB PERCAPTA E DENSIDADE POPULACIONAL CARTA2 //

    if (Area_em_Km22 != 0.0) {
        densidade_populacional2 = (float)Populacao2 / Area_em_Km22;
    } else {
        densidade_populacional2 = 0.0;
    }

    if (Populacao2 > 0) {
        pib_percapta2 = (PIB2 * 1e9) / (float)Populacao2;
    } else {
        pib_percapta2 = 0.0;
    }
 
    // EXIBICAO DADOS COLETADOS CARTA1 //

    printf("\n--- Dados Coletados Carta 1 ---\n");
    printf("Carta: %d\n", carta1);
    printf("Estado: %s\n", Estado);
    printf("Código: %s\n", Codigo_da_Carta);
    printf("Cidade: %s\n", Nome_da_Cidade);
    printf("População: %d\n", Populacao);
    printf("Área em Km²: %.2f\n", Area_em_Km2);
    printf("PIB: %.2f Bilhões de Reais\n", PIB);
    printf("Número de Pontos Turisticos: %d\n", Numero_de_Pontos_Turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capta: %.2f Reais\n", pib_percapta);

    // EXIBICAO DADOS COLETADOS CARTA2 //

    printf("\n--- Dados Coletados Carta 2 ---\n");
    printf("Carta: %d\n", Carta2);
    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", Codigo_da_Carta2);
    printf("Cidade: %s\n", Nome_da_Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área em Km²: %.2f\n", Area_em_Km22);
    printf("PIB: %.2f Bilhões de Reais\n", PIB2);
    printf("Número de Pontos Turisticos: %d\n", Numero_de_Pontos_Turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capta: %.2f Reais\n", pib_percapta2);
    
    // CALCULAR SUPER PODER // - // CHECK BASICO DIVIDE BY 0 //    
     
    float inverso_densidade1 = (densidade_populacional != 0.0) ? (1.0 / densidade_populacional) : 0.0;
    float inverso_densidade2 = (densidade_populacional2 != 0.0) ? (1.0 / densidade_populacional2) : 0.0;
    
    super_poder1 = (float)Populacao + Area_em_Km2 + PIB + (float)Numero_de_Pontos_Turisticos + pib_percapta + inverso_densidade1;
    super_poder2 = (float)Populacao2 + Area_em_Km22 + PIB2 + (float)Numero_de_Pontos_Turisticos2 + pib_percapta2 + inverso_densidade2;

    // EXIBICAO E COMPARACAO IF E ELSE (Atributo: População) //

    printf("\n--- Comparação de Cartas (Atributo: População) ---\n");

    printf("Carta 1 - %s (%s): %d\n", Nome_da_Cidade, Estado, Populacao);
    printf("Carta 2 - %s (%s): %d\n", Nome_da_Cidade2, Estado2, Populacao2);

    // Regra: População - O maior valor vence
    
    if (Populacao > Populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", Nome_da_Cidade);
    } 
    // Se o valor2 for maior que o valor1

    else if (Populacao2 > Populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", Nome_da_Cidade2);
    }
    
    return 0;
}

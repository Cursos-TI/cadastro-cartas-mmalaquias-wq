#include <stdio.h>

int main() {
    // VARIÁVEIS //
    int Populacao, Populacao2, Numero_de_Pontos_Turisticos, Numero_de_Pontos_Turisticos2;
    char Estado[3], Codigo_da_Carta[5], Nome_da_Cidade[30], Estado2[3], Codigo_da_Carta2[5], Nome_da_Cidade2[30];
    float Area_em_Km2, PIB, Area_em_Km22, PIB2;
    float densidade_populacional, pib_percapta, densidade_populacional2, pib_percapta2, super_poder1, super_poder2;
    int opcao;

    // COLETA DE DADOS DA CARTA 1 //
    printf("\n--- Inserção Carta 1 ---\n");
    printf("Digite o Estado (Ex: RJ): ");
    scanf("%2s", Estado);
    printf("Digite o Código da Carta (Ex: A01): ");
    scanf("%4s", Codigo_da_Carta);
    printf("Digite o nome da cidade: ");
    scanf(" %29[^\n]", Nome_da_Cidade);
    printf("Digite a população: ");
    scanf("%d", &Populacao);
    printf("Digite área em km²: ");
    scanf("%f", &Area_em_Km2);
    printf("Digite o valor do PIB (em bilhões): ");
    scanf("%f", &PIB);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &Numero_de_Pontos_Turisticos);

    // CÁLCULOS CARTA 1 //
    densidade_populacional = (Area_em_Km2 > 0) ? (float)Populacao / Area_em_Km2 : 0;
    pib_percapta = (Populacao > 0) ? (PIB * 1e9) / (float)Populacao : 0;
    // Super Poder: Soma de atributos (Inverso da densidade para que menor densidade ajude no poder)
    super_poder1 = (float)Populacao + Area_em_Km2 + (PIB * 1e9) + (float)Numero_de_Pontos_Turisticos + pib_percapta;

    // COLETA DE DADOS DA CARTA 2 //
    printf("\n--- Inserção Carta 2 ---\n");
    printf("Digite o Estado: ");
    scanf("%2s", Estado2);
    printf("Digite o Código da Carta: ");
    scanf("%4s", Codigo_da_Carta2);
    printf("Digite o nome da cidade: ");
    scanf(" %29[^\n]", Nome_da_Cidade2);
    printf("Digite a população: ");
    scanf("%d", &Populacao2);
    printf("Digite área em km²: ");
    scanf("%f", &Area_em_Km22);
    printf("Digite o valor do PIB (em bilhões): ");
    scanf("%f", &PIB2);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &Numero_de_Pontos_Turisticos2);

    // CÁLCULOS CARTA 2 //
    densidade_populacional2 = (Area_em_Km22 > 0) ? (float)Populacao2 / Area_em_Km22 : 0;
    pib_percapta2 = (Populacao2 > 0) ? (PIB2 * 1e9) / (float)Populacao2 : 0;
    super_poder2 = (float)Populacao2 + Area_em_Km22 + (PIB2 * 1e9) + (float)Numero_de_Pontos_Turisticos2 + pib_percapta2;

    // MENU INTERATIVO //
    printf("\n=============================\n");
    printf("      MENU DE COMPARAÇÃO     \n");
    printf("=============================\n");
    printf("1. População\n");
    printf("2. Área em Km²\n");
    printf("3. PIB (Bilhões)\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. Super Poder (Geral)\n");
    printf("Escolha o atributo para o duelo: ");
    scanf("%d", &opcao);

    printf("\n--- RESULTADO DO DUELO ---\n");
    printf("%s vs %s\n", Nome_da_Cidade, Nome_da_Cidade2);

    

    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("Valores: %d vs %d\n", Populacao, Populacao2);
            if (Populacao > Populacao2) printf("Vencedor: %s\n", Nome_da_Cidade);
            else if (Populacao2 > Populacao) printf("Vencedor: %s\n", Nome_da_Cidade2);
            else printf("Resultado: Empate!\n");
            break;
        case 2:
            printf("Atributo: Área\n");
            printf("Valores: %.2f km² vs %.2f km²\n", Area_em_Km2, Area_em_Km22);
            if (Area_em_Km2 > Area_em_Km22) printf("Vencedor: %s\n", Nome_da_Cidade);
            else if (Area_em_Km22 > Area_em_Km2) printf("Vencedor: %s\n", Nome_da_Cidade2);
            else printf("Resultado: Empate!\n");
            break;
        case 3:
            printf("Atributo: PIB\n");
            printf("Valores: %.2f Bi vs %.2f Bi\n", PIB, PIB2);
            if (PIB > PIB2) printf("Vencedor: %s\n", Nome_da_Cidade);
            else if (PIB2 > PIB) printf("Vencedor: %s\n", Nome_da_Cidade2);
            else printf("Resultado: Empate!\n");
            break;
        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("Valores: %d vs %d\n", Numero_de_Pontos_Turisticos, Numero_de_Pontos_Turisticos2);
            if (Numero_de_Pontos_Turisticos > Numero_de_Pontos_Turisticos2) printf("Vencedor: %s\n", Nome_da_Cidade);
            else if (Numero_de_Pontos_Turisticos2 > Numero_de_Pontos_Turisticos) printf("Vencedor: %s\n", Nome_da_Cidade2);
            else printf("Resultado: Empate!\n");
            break;
        case 5:
            printf("Atributo: Densidade Demográfica\n");
            printf("Valores: %.2f hab/km² vs %.2f hab/km²\n", densidade_populacional, densidade_populacional2);
            // REGRA ESPECIAL: Menor densidade vence
            if (densidade_populacional < densidade_populacional2) printf("Vencedor: %s\n", Nome_da_Cidade);
            else if (densidade_populacional2 < densidade_populacional) printf("Vencedor: %s\n", Nome_da_Cidade2);
            else printf("Resultado: Empate!\n");
            break;
        case 6:
            printf("Atributo: Super Poder\n");
            printf("Valores: %.2f vs %.2f\n", super_poder1, super_poder2);
            if (super_poder1 > super_poder2) printf("Vencedor: %s\n", Nome_da_Cidade);
            else if (super_poder2 > super_poder1) printf("Vencedor: %s\n", Nome_da_Cidade2);
            else printf("Resultado: Empate!\n");
            break;
        default:
            printf("Opção inválida! Escolha de 1 a 6.\n");
            break;
    }

    return 0;
}

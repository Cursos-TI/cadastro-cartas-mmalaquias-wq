#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades

  int carta1, Carta2, Populacao, Populacao2, Numero_de_Pontos_Turisticos, Numero_de_Pontos_Turisticos2;
    char Estado[3], Codigo_da_Carta[5], Nome_da_Cidade[30], Estado2[3], Codigo_da_Carta2[5], Nome_da_Cidade2[30];
    float Area_em_Km2, PIB, Area_em_Km22, PIB2;

  // Área para entrada de dados

  //--- COLETA DE DADOS DA CARTA 1 ---//

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

    printf("Digite o valor do PIB: ");
    scanf("%f", &PIB); 

    printf("Digite o Número de Pontos Turisticos: ");
    scanf("%d", &Numero_de_Pontos_Turisticos);

    //--- COLETA DE DADOS DA CARTA 2 ---//

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

    printf("Digite o valor do PIB: ");
    scanf("%f", &PIB2); 

    printf("Digite o Número de Pontos Turisticos: ");
    scanf("%d", &Numero_de_Pontos_Turisticos2);

  // Área para exibição dos dados da cidade

  //--- EXIBICAO DADOS COLETADOS ---//

    printf("\n--- Dados Coletados ---\n");
    printf("Carta: %d\n", carta1);
    printf("Estado: %s\n", Estado);
    printf("Código: %s\n", Codigo_da_Carta);
    printf("Cidade: %s\n", Nome_da_Cidade);
    printf("População: %d\n", Populacao);
    printf("Área em Km²: %.2f\n", Area_em_Km2);
    printf("PIB: %.2f Bilhões de Reais\n", PIB);
    printf("Número de Pontos Turisticos: %d\n", Numero_de_Pontos_Turisticos);

    printf("\n--- Dados Coletados ---\n");
    printf("Carta: %d\n", Carta2);
    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", Codigo_da_Carta2);
    printf("Cidade: %s\n", Nome_da_Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área em Km²: %.2f\n", Area_em_Km22);
    printf("PIB: %.2f Bilhões de Reais\n", PIB2);
    printf("Número de Pontos Turisticos: %d\n", Numero_de_Pontos_Turisticos2);

return 0;
} 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    // Variáveis para os dados das duas cartas
    char estado1, estado2, codigo1[4], codigo2[4], nome1[50], nome2[50];
    unsigned long int populacao1, populacao2;
    int pontos1, pontos2;
    float area1, area2, pib1, pib2, densidade_populacional1, densidade_populacional2, pib_percapita1, pib_percapita2, super_poder1, super_poder2;

    // =================== CARTA 1 ===================
    printf("=== Cadastro da Carta 1 ===\n");

    // Estado
    printf("Em qual estado fica a cidade? (A-H): ");
    scanf(" %c", &estado1);

    // Código da carta
    printf("Digite o código da carta (ex: A01, B03): ");
    scanf("%3s", codigo1);

    getchar(); // consome o ENTER antes do fgets

    // Nome da cidade
    printf("Digite o nome da cidade: ");
    fgets(nome1, sizeof(nome1), stdin);
    nome1[strcspn(nome1, "\n")] = '\0'; // remove ENTER

    // População
    printf("Digite o número de habitantes: ");
    scanf("%lu", &populacao1);

    // Área
    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area1);

    // PIB
    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);

    // Pontos turísticos
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);

    getchar(); // limpar ENTER pendente

    //Densidade Populacional
    densidade_populacional1 = populacao1 / area1;

    //PIB per capital
    pib_percapita1 = pib1 / populacao1;

    // Inverso da densidade populacional
    float inverso_densidade1 = 1.0f / densidade_populacional1;

    // Super Poder
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos1 + pib_percapita1 + inverso_densidade1;

    // =================== CARTA 2 ===================
    printf("\n=== Cadastro da Carta 2 ===\n");

    // Estado
    printf("Em qual estado fica a cidade? (A-H): ");
    scanf(" %c", &estado2);

    // Código da carta
    printf("Digite o código da carta (ex: A01, B03): ");
    scanf("%3s", codigo2);

    getchar(); // consome o ENTER antes do fgets

    // Nome da cidade
    printf("Digite o nome da cidade: ");
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = '\0'; // remove ENTER

    // População
    printf("Digite o número de habitantes: ");
    scanf("%lu", &populacao2);

    // Área
    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area2);

    // PIB
    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);

    // Pontos turísticos
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);

    getchar(); // limpar ENTER pendente

    densidade_populacional2 = populacao2 / area2;
    //Densidade Populacional
    
    //PIB per capital
    pib_percapita2 = pib2 / populacao2;

    // Inverso da densidade populacional
    float inverso_densidade2 = 1.0f / densidade_populacional2;

    // Super Poder
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos2 + pib_percapita2 + inverso_densidade2;

    // Exibindo resultados
    printf("\n===== CARTAS CADASTRADAS =====\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per capita: %.2f\n", pib_percapita1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per capita: %.2f\n", pib_percapita2);
    printf("Super Poder: %.2f\n", super_poder2);

     // comparações
    printf("\n===== COMPARAÇÃO DE CARTAS =====\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade_populacional1 < densidade_populacional2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_percapita1 > pib_percapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);

    return 0;
}

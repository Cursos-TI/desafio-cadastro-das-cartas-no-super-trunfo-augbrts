#include <stdio.h>

int main() {
    // Declaracao de variaveis 
    char codigo1[4], codigo2[4];
    char cidade1[100], cidade2[100];
    int populacao1, populacao2;
    int area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;
    float pibpc1, pibpc2;
    float superPoder1, superPoder2;

    // Entrada de dados para a primeira cidade
    printf("Cadastro da primeira cidade:\n");
    printf("Qual o codigo da cidade? ");
    scanf("%s", codigo1);
    printf("Qual o nome da cidade? ");
    scanf("%s", cidade1);
    printf("Qual a populacao? ");
    scanf("%d", &populacao1);
    printf("Qual a area? ");
    scanf("%d", &area1);
    printf("Digite o PIB em bilhoes (ex.: 183.4): ");
    scanf("%f", &pib1);
    pib1 *= 1e9; // Converte PIB para bilhoes
    printf("Quantos pontos turisticos? ");
    scanf("%d", &pontos1);

    // Calculo para a primeira cidade
    densidade1 = (float)populacao1 / area1;
    pibpc1 = pib1 / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pontos1 + densidade1 + pibpc1;

    // Entrada de dados para a segunda cidade
    printf("\nCadastro da segunda cidade:\n");
    printf("Qual o codigo da cidade? ");
    scanf("%s", codigo2);
    printf("Qual o nome da cidade? ");
    scanf("%s", cidade2);
    printf("Qual a populacao? ");
    scanf("%d", &populacao2);
    printf("Qual a area? ");
    scanf("%d", &area2);
    printf("Digite o PIB em bilhoes (ex.: 183.4): ");
    scanf("%f", &pib2);
    pib2 *= 1e9; 
    printf("Quantos pontos turisticos? ");
    scanf("%d", &pontos2);

    // Calculo para a segunda cidade
    densidade2 = (float)populacao2 / area2;
    pibpc2 = pib2 / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontos2 + densidade2 + pibpc2;

    // Comparacao das propriedades
    printf("\n Hora do duelo! \n");

    // Densidade Populacional (menor vence)
    printf("Densidade Populacional: ");
    if (densidade1 < densidade2) {
        printf("Vencedora: %s (%.2f pessoas/km2)\n", cidade1, densidade1);
    } else if (densidade1 > densidade2) {
        printf("Vencedora: %s (%.2f pessoas/km2)\n", cidade2, densidade2);
    } else {
        printf("Empate (%.2f pessoas/km2)\n", densidade1);
    }

    // Populacao (maior vence)
    printf("Populacao: ");
    if (populacao1 > populacao2) {
        printf("Vencedora: %s (%d habitantes)\n", cidade1, populacao1);
    } else if (populacao1 < populacao2) {
        printf("Vencedora: %s (%d habitantes)\n", cidade2, populacao2);
    } else {
        printf("Empate (%d habitantes)\n", populacao1);
    }

    // Area (maior vence)
    printf("Area: ");
    if (area1 > area2) {
        printf("Vencedora: %s (%d km2)\n", cidade1, area1);
    } else if (area1 < area2) {
        printf("Vencedora: %s (%d km2)\n", cidade2, area2);
    } else {
        printf("Empate (%d km2)\n", area1);
    }

    // PIB (maior vence)
    printf("PIB: ");
    if (pib1 > pib2) {
        printf("Vencedora: %s (%.2f bilhoes)\n", cidade1, pib1 / 1e9);
    } else if (pib1 < pib2) {
        printf("Vencedora: %s (%.2f bilhoes)\n", cidade2, pib2 / 1e9);
    } else {
        printf("Empate (%.2f bilhoes)\n", pib1 / 1e9);
    }

    // Pontos Turisticos (maior vence)
    printf("Pontos Turisticos: ");
    if (pontos1 > pontos2) {
        printf("Vencedora: %s (%d pontos)\n", cidade1, pontos1);
    } else if (pontos1 < pontos2) {
        printf("Vencedora: %s (%d pontos)\n", cidade2, pontos2);
    } else {
        printf("Empate (%d pontos)\n", pontos1);
    }

    // Super Poder (maior vence)
    printf("Super Poder: ");
    if (superPoder1 > superPoder2) {
        printf("Vencedora: %s (%.2f)\n", cidade1, superPoder1);
    } else if (superPoder1 < superPoder2) {
        printf("Vencedora: %s (%.2f)\n", cidade2, superPoder2);
    } else {
        printf("Empate (%.2f)\n", superPoder1);
    }

    printf("Fim do duelo!\n");

    return 0;
}

#include <stdio.h>
 
int main() {
    char codigo[4]; //codigo e cidade como strings já que possuem mais de um caracteres.
    char cidade[100]; 
    int populacao; //população e area coloquei como numeros inteiros.
    int area; // até tentei area como float mas percebi que não faz sentido. 
    float pib; //pib como float para ser um pouco mais detalhado.
    int numero;
    float densidade;
    float pibpc;

    printf("Qual o codigo da cidade? ");
    scanf("%s", &codigo);
    printf("O codigo da cidade e:  %s\n", codigo);
    printf("Qual o nome da cidade? ");
    scanf("%s", &cidade);
    printf("O nome da cidade e: %s\n", cidade);
    printf("Qual a populacao? ");
    scanf("%d", &populacao);
    printf("A populacao e:  %d\n", populacao);
    printf("Qual a area? ");
    scanf("%d", &area);
    printf("A area e: %dkm²\n", area);
    printf("Digite o PIB em bilhoes: (ex; 183.4) "); //Mudei o enunciado para ser mais claro.
    scanf("%f", &pib);
    pib = pib * 1e9; // Eu estava tendo erro pela forma que estava inserindo PIB. Essa linha multiplica por 1bi.
    printf("O pib e: %.2f bi\n", pib);
    printf("Ha quantos pontos turisticos? ");
    scanf("%d", &numero);
    printf("Ha %d pontos turisticos\n", numero);

    densidade = populacao / area;
    pibpc = pib / populacao; 

    printf("O pib per capta e de: %.2f\n", pibpc);
    printf("A densidade populacional e de %.2f pessoas por km²\n", densidade);
    printf("Carta registrada!\n");

    return 0;
}

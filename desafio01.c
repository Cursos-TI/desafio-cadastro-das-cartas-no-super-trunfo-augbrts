#include <stdio.h>
 
int main() {
    char codigo[4];
    char cidade[100];
    int populacao;
    int area;
    float pib;
    int numero;
    
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
    printf("Qual o pib? ");
    scanf("%f", &pib);
    printf("O pib e: %f bi\n", pib);
    printf("Ha quantos pontos turisticos? ");
    scanf("%d", &numero);
    printf("Ha %d pontos turisticos\n", numero);

    return 0;
}

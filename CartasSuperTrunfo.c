#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    char a;
    char estado1;
    char codCarta1 [4];
    char nome1 [50];
    int populacao1;
    int pontosTuristicos1;
    float areaKm1;
    float pib1;

    char b;
    char estado2;
    char codCarta2 [4];
    char nome2 [50];
    int populacao2;
    int pontosTuristicos2;
    float areaKm2;
    float pib2;

     int c;

    //=== Carta 1 ===//
    printf("Insira os dados da carta 1\n");
    printf("Digite o estado (uma letra de A à H):");
    scanf("%c", &a);
    estado1 = a;


    printf("Digite o codigo da carta:");
    scanf ("%s", codCarta1);

    while ((c = getchar()) != '\n' && c != EOF); // Limpa o buffer de entrada com segurança
    printf("Digite o nome da cidade:");
    fgets (nome1, 50, stdin);
    nome1[strcspn(nome1, "\n")] = '\0';

    printf("Digite a população:");
    scanf("%d", &populacao1);

    printf("Digite a Area (em km2):");
    scanf("%f", &areaKm1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o numero de Pontos Turisticos:");
    scanf("%d", &pontosTuristicos1);


    //=== Carta 2 ===
    while ((c = getchar()) != '\n' && c != EOF); // Limpa o buffer de entrada com segurança
    printf("Insira os dados da carta 2\n");
    printf("Digite o estado (uma letra de A à H):");
    scanf("%c", &b);
    estado2 = b;

    printf("Digite o codigo da carta:");
    scanf ("%s", codCarta2);
    while ((c = getchar()) != '\n' && c != EOF); // Limpa o buffer de entrada com segurança

    printf("Digite o nome da cidade:");
    fgets (nome2, 50, stdin);
    nome2[strcspn(nome2, "\n")] = 0;

    printf("Digite a população:");
    scanf("%d", &populacao2);

    printf("Digite a Area (em km2): ");
    scanf("%f", &areaKm2);

    printf("Digite o PIB:");
    scanf("%f", &pib2);

    printf("Digite o numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    //=== Imprime as cartas cadastradas ===
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codCarta1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area %.2f km2\n", areaKm1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codCarta2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area %.2f km2\n", areaKm2 );
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    char a;
    char estado1;
    char codCarta1 [4];
    char nome1 [50];
    unsigned long int populacao1;
    int pontosTuristicos1;
    float areaKm1;
    float pib1;
    float denPop1;
    float percPIB1;

    char b;
    char estado2;
    char codCarta2 [4];
    char nome2 [50];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float areaKm2;
    float pib2;
    float denPop2;
    float percPIB2;

    int carta1 = 0;
    int carta2 = 0;

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
    scanf("%lu", &populacao1);

    printf("Digite a Area (em km2):");
    scanf("%f", &areaKm1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o numero de Pontos Turisticos:\n");
    scanf("%d", &pontosTuristicos1);

    denPop1 = (populacao1 / areaKm1);
    percPIB1 = ((pib1* 1000000000) / populacao1);


    //=== Carta 2 ===
    while ((c = getchar()) != '\n' && c != EOF); // Limpa o buffer de entrada com segurança
    printf("\nInsira os dados da carta 2\n");
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
    scanf("%lu", &populacao2);

    printf("Digite a Area (em km2): ");
    scanf("%f", &areaKm2);

    printf("Digite o PIB:");
    scanf("%f", &pib2);

    printf("Digite o numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    denPop2 = populacao2 / areaKm2;
    percPIB2 = (pib2* 1000000000) / populacao2;






    //=== Imprime as cartas cadastradas ===
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codCarta1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area %.2f km2\n", areaKm1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", denPop1);
    printf("PIB per Capita: %.2f reais\n", percPIB1);


    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codCarta2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area %.2f km2\n", areaKm2 );
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", denPop2);
    printf("PIB per Capita: %.2f reais\n", percPIB2);


    printf("\nComparacao de cartas:\n");

    if (populacao1>populacao2){
        carta1 ++;
        printf(" \nPopulacao: Carta 1 venceu (1)!\n");
    }
    else{
        carta2++;
        printf("Populacao: Carta 2 venceu (0)!\n");
    }

    if (areaKm1>areaKm2){
        carta1 ++;
        printf("Area: Carta 1 venceu (1)!\n");
    }
    else{
        carta2++;
        printf("Area: Carta 2 venceu (0)!\n");
    }

    if (pib1>pib2){
        carta1 ++;
        printf("PIB: Carta 1 venceu (1)!\n");
    }
    else{
        carta2++;
        printf("PIB: Carta 2 venceu (0)!\n");
    }

    if (pontosTuristicos1>pontosTuristicos2){
        carta1 ++;
        printf("Pontos Turisticos: Carta 1 venceu (1)!\n");
    }
    else{
        carta2++;
        printf(" Pontos Turisticos: Carta 2 venceu (0)!\n");
    }

    if (denPop1>denPop2){
        carta1 ++;
        printf("Densidade Populacional: Carta 1 venceu (1)!\n");
    }
    else{
        carta2++;
        printf("Densidade populacional: Carta 2 venceu (0)!\n");
    }

    if (percPIB1>percPIB2){
        carta1 ++;
        printf("PIB per Capita: Carta 1 venceu (1)!\n");
    }
    else{
        carta2++;
        printf("PIB per Capita: Carta 2 venceu (0)!\n");
    }

    if (carta1>carta2){
        carta1 ++;
        printf("Super Poder: Carta 1 venceu (1)!\n");
    }
    else{
        carta2++;
        printf("Super Poder: Carta 2 venceu (0)!\n");
    }


    return 0;
}

#include <stdio.h>
#include <string.h>


int main(){
  
    // Variaveis globais
    char lixo[32];

    // Carta 1
    // Declaração de variaveis

    char estado1;
    char idCarta1[3];
    char nomeCidade1[50];
    int populacao1;
    float areaTerritorio1;
    float pib1;
    int pontosTuristicos1;
    float pibPerCap1;
    float densiPopu1;

    // Fluxo de estradas
    printf("Cadastro da Carta 1:\n\n");

    printf("Digite o caracter representande do estado [A-H]: ");
    fgets(lixo, sizeof(lixo), stdin);
    estado1 = lixo[0];

    printf("Digite o nome da cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = '\0';

    printf("Digite o número correspondente a população: ");
    fgets(lixo, sizeof(lixo), stdin);
    sscanf(lixo, "%d", &populacao1);

    printf("Digite o tamanho do territorio: ");
    fgets(lixo, sizeof(lixo), stdin);
    sscanf(lixo, "%f", &areaTerritorio1);

    printf("Digite o pib: ");
    fgets(lixo, sizeof(lixo), stdin);
    sscanf(lixo, "%f", &pib1);

    printf("Digite a quantia de pontos turisticos: ");
    fgets(lixo, sizeof(lixo), stdin);
    sscanf(lixo, "%d", &pontosTuristicos1);

    // Fluxo logico
    sprintf(idCarta1, "%c01", estado1);
    densiPopu1 = populacao1 / areaTerritorio1;
    pibPerCap1 = pib1 / populacao1;

    // Fluxo de saida
    printf("\n\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", idCarta1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2fKm²\n", areaTerritorio1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f\n", densiPopu1);
    printf("PIB per capita: %.2f\n\n\n", pibPerCap1);
    
    


    // Carta 2
    // Declaração de variaveis

    char estado2;
    char idCarta2[3];
    char nomeCidade2[50];
    int populacao2;
    float areaTerritorio2;
    float pib2;
    int pontosTuristicos2;
    float pibPerCap2;
    float densiPopu2;

    // Fluxo de estradas
    printf("Cadastro da Carta 2:\n\n");

    printf("Digite o caracter representande do estado [A-H]: ");
    fgets(lixo, sizeof(lixo), stdin);
    estado2 = lixo[0];

    printf("Digite o nome da cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0';

    printf("Digite o número correspondente a população: ");
    fgets(lixo, sizeof(lixo), stdin);
    sscanf(lixo, "%d", &populacao2);

    printf("Digite o tamanho do territorio: ");
    fgets(lixo, sizeof(lixo), stdin);
    sscanf(lixo, "%f", &areaTerritorio2);

    printf("Digite o pib: ");
    fgets(lixo, sizeof(lixo), stdin);
    sscanf(lixo, "%f", &pib2);

    printf("Digite a quantia de pontos turisticos: ");
    fgets(lixo, sizeof(lixo), stdin);
    sscanf(lixo, "%d", &pontosTuristicos2);

    // Fluxo logico
    sprintf(idCarta2, "%c02", estado2);
    densiPopu2 = populacao2 / areaTerritorio2;
    pibPerCap2 = pib2 / populacao2;

    // Fluxo de saida
    printf("\n\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", idCarta2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2fKm²\n", areaTerritorio2);
    printf("pib: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f\n", densiPopu2);
    printf("PIB per capita: %.2f\n\n\n", pibPerCap2);
    
 
    
    return 0;

}
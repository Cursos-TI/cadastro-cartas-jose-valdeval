#include <stdio.h>
#include <string.h>


void mostarCarta(char carta, char estado, char idCarta[], char nomeCidade[], unsigned long int populacao, float areaTerritorio,\
    float pib, int pontosTuristico, float densidadePopulacional, float pibPerCapita){

    pib /= 1000000000;

    printf("\n\nCarta %d:\n", carta);
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", idCarta);
    printf("Nome da cidade: %s\n", nomeCidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2fKm²\n", areaTerritorio);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de pontos turísticos: %d\n", pontosTuristico);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional);
    printf("PIB per capita: %.2f reais\n\n\n", pibPerCapita);
}


void exibirComparacao(float atributo1, float atributo2){
    printf("Comparação de cartas (Atributo: Territorio):\n");
    printf("Carta 1 - São Paulo (SP): %.2fkm²\n", atributo1);
    printf("Carta 2 - Rio de Janeiro (RJ): %.2fkm²\n", atributo2);

    if (atributo1 == atributo2){
        printf("Resultado: Empatou!\n\n\n");
    }else if (atributo2 < atributo1){
        printf("Resultado: Carta 1 (São Paulo) venceu!\n");
    }else{
        printf("Resultado: Carta 2 (Rio de Janeiro) venceu!\n");
    }
}


int main(){
  
    // Variaveis globais
    char lixo[32];

    // Carta 1
    // Declarações de variaveis

    int carta1 = 1;
    char estado1 = 'A';
    char idCarta1[10];
    char nomeCidade1[50] = "São Paulo";
    unsigned long int populacao1 = 12325000;
    float areaTerritorio1 = 1521.11;
    float pib1 = 699.28 * 1000000000;
    int pontosTuristico1 = 50;
    float pibPerCapita1;
    float densidadePopulacional1;

    // Fluxo logico
    sprintf(idCarta1, "%c01", estado1);
    densidadePopulacional1 = populacao1 / areaTerritorio1;
    pibPerCapita1 = pib1 / populacao1;


    // Fluxo de saida
    mostarCarta(carta1, estado1, idCarta1, nomeCidade1, populacao1, areaTerritorio1, pib1, pontosTuristico1, densidadePopulacional1, pibPerCapita1);
    

    // Carta 2
    // Declarações de variaveis

    int carta2 = 2;
    char estado2 = 'B';
    char idCarta2[10];
    char nomeCidade2[50] = "Rio de Janeiro";
    unsigned long int populacao2 = 6748000;
    float areaTerritorio2 = 1200.25;
    float pib2 = 300.5 * 1000000000;
    int pontosTuristico2 = 30;
    float pibPerCapita2;
    float densidadePopulacional2;

    // Fluxo logico
    sprintf(idCarta2, "%c02", estado2);
    densidadePopulacional2 = populacao2 / areaTerritorio2;
    pibPerCapita2 = pib2 / populacao2;

    // // Fluxo de saida
    mostarCarta(carta2, estado2, idCarta2, nomeCidade2, populacao2, areaTerritorio2, pib2, pontosTuristico2, densidadePopulacional2, pibPerCapita2);
    exibirComparacao(areaTerritorio1, areaTerritorio2);

    return 0;

};
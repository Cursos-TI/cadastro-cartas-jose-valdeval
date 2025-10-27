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


void exibirComparacao( int carta1, int carta2, char nomeCidade1[], char nomeCidade2[], char atributo[], float atributo1, float atributo2, int inverte){

    if (atributo == "População"){
        printf("Comparação de cartas (Atributo: %s):\n", atributo);
        printf("Carta %d - %s (SP): %d\n", carta1, nomeCidade1, (int)atributo1);
        printf("Carta %d - %s (RJ): %d\n", carta2, nomeCidade2, (int)atributo2);

    }
    else if (atributo == "Área"){       
        printf("Comparação de cartas (Atributo: %s):\n", atributo);
        printf("Carta %d - %s (SP): %.2fkm²\n", carta1, nomeCidade1, atributo1);
        printf("Carta %d - %s (RJ): %.2fkm²\n", carta2, nomeCidade2, atributo2);

    }
    else if (atributo == "PIB"){       
        printf("Comparação de cartas (Atributo: %s):\n", atributo);
        printf("Carta %d - %s (SP): R$%.2f\n", carta1, nomeCidade1, atributo1/1000000000);
        printf("Carta %d - %s (RJ): R$%.2f\n", carta2, nomeCidade2, atributo2/1000000000);

    }
    else if (atributo == "Pontos Turisticos"){       
        printf("Comparação de cartas (Atributo: %s):\n", atributo);
        printf("Carta %d - %s (SP): %d\n", carta1, nomeCidade1, (int)atributo1);
        printf("Carta %d - %s (RJ): %d\n", carta2, nomeCidade2, (int)atributo2);

    }
    else if (atributo == "Densidade Demografica"){       
        printf("Comparação de cartas (Atributo: %s):\n", atributo);
        printf("Carta %d - %s (SP): %.2f hab/km²\n", carta1, nomeCidade1, atributo1);
        printf("Carta %d - %s (RJ): %.2f hab/km²\n", carta2, nomeCidade2, atributo2);

    }
    
    if (inverte == 0){
        if (atributo1 == atributo2){
            printf("\nResultado: Empatou!\n");
        }else if (atributo2 < atributo1){
            printf("\nResultado: Carta %d (%s) venceu!\n", carta1, nomeCidade1);
        }else{
            printf("\nResultado: Carta %d (%s) venceu!\n", carta2, nomeCidade2);
        }
    }else{
        if (atributo1 == atributo2){
            printf("\nResultado: Empatou!\n");
        }else if (atributo2 > atributo1){
            printf("\nResultado: Carta %d (%s) venceu!\n", carta1, nomeCidade1);
        }else{
            printf("\nResultado: Carta %d (%s) venceu!\n", carta2, nomeCidade2);
        }
    }
}


int main(){
  
    // Variaveis globais
    char lixo[32];

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
    
    int opcao;


    // Fluxo logico
    sprintf(idCarta1, "%c01", estado1);
    densidadePopulacional1 = populacao1 / areaTerritorio1;
    pibPerCapita1 = pib1 / populacao1;
    
    sprintf(idCarta2, "%c02", estado2);
    densidadePopulacional2 = populacao2 / areaTerritorio2;
    pibPerCapita2 = pib2 / populacao2;
    
    // // Fluxo de saida
    mostarCarta(carta1, estado1, idCarta1, nomeCidade1, populacao1, areaTerritorio1, pib1, pontosTuristico1, densidadePopulacional1, pibPerCapita1);
    mostarCarta(carta2, estado2, idCarta2, nomeCidade2, populacao2, areaTerritorio2, pib2, pontosTuristico2, densidadePopulacional2, pibPerCapita2);

    densidadePopulacional1 = densidadePopulacional2;
    populacao1 = populacao2;

    printf("\n\nSelecione uma opção:\n\n");
    printf("1. Nome da cidade\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Número de pontos turisticos\n");
    printf("6. Densidade demografica\n\n");

    printf(">>> ");
    scanf("%d", &opcao);
    printf("\n");
    
    switch(opcao){
        case 1:

            printf("Comparação de cartas (Atributo: Nome da Cidade):\n");
            printf("Carta %d - %s (SP)\n", carta1, nomeCidade1);
            printf("Carta %d - %s (RJ)\n", carta2, nomeCidade2);
            break;
        case 2:
            exibirComparacao(carta1, carta2, nomeCidade1, nomeCidade2, "População", populacao1, populacao2, 0);
            break;
        case 3:
            exibirComparacao(carta1, carta2, nomeCidade1, nomeCidade2, "Área", areaTerritorio1, areaTerritorio2, 0);
            break;
        case 4:
            exibirComparacao(carta1, carta2, nomeCidade1, nomeCidade2, "PIB", pib1, pib2, 0);
            break;
        case 5:
            exibirComparacao(carta1, carta2, nomeCidade1, nomeCidade2, "Pontos Turisticos", pontosTuristico1, pontosTuristico2, 0);
            break;
        case 6:
            exibirComparacao(carta1, carta2, nomeCidade1, nomeCidade2, "Densidade Demografica", densidadePopulacional1, densidadePopulacional2, 1);
            break;
        case 7:
            int condition = 0;
            break;
    }



    // exibirComparacao(carta1, carta2, nomeCidade1, nomeCidade2, areaTerritorio1, areaTerritorio2);
    
    return 0;
    
};
#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    //Variáveis Primeira Carta - Segunda Carta
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTurist1, pontosTurist2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;


    //Boas vindas e explicação da premissa do programa
    printf("Bem-vindo ao Super Trunfo Países!\n");
    printf("Você cadastrará duas cartas.\nComece cadastrando a primeira seguindo as instruções abaixo.\n");
    
    //Cadastro da primeira carta
    printf("\n======= Primeira Carta =======\n"); 
    printf("Digite a letra que representará o estado da sua carta\nApenas uma letra do alfabeto entre A-H (Ex.: A, B, etc.):\n- ");
    scanf(" %c", &estado1);
    printf("\nDigite o código da carta\nUse a letra do estado seguido de um número de 01-04(Ex.: A01, A02, etc):\n- ");
    scanf("%s", codigo1);
    getchar(); //Consome a linha que sobrou do scanf pra não atrapalhar o fgets
    printf("\nDigite o nome da cidade(Ex.:São Paulo):\n- ");
    fgets(cidade1, 50, stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;
    printf("\nDigite o numero de habitantes da cidade:\n- ");
    scanf("%lu", &populacao1);
    printf("\nDigite a área da cidade em km²:\n- ");
    scanf("%f", &area1);
    printf("\nDigite o PIB da cidade\nUse números decimais em bilhões(Ex.:2152.21):\n- ");
    scanf("%f", &pib1);
    printf("\nDigite o número de pontos turísticos da cidade:\n- ");
    scanf("%d", &pontosTurist1);

    //Avisos
    printf("\nSua primeira carta foi criada!\n");
    printf("Siga as instruções abaixo para a criação da segunda.\n");

    //Cadastro da segunda carta
    printf("\n======= Segunda Carta =======\n");
    printf("Digite a letra que representará o estado da sua carta\nApenas uma letra do alfabeto entre A-H (Ex.: A, B, etc.):\n- ");
    scanf(" %c", &estado2);
    printf("\nDigite o código da carta\nUse a letra do estado seguido de um número de 01-04(Ex.: A01, A02, etc):\n- ");
    scanf("%s", codigo2);
    getchar(); //Consome a linha que sobrou do scanf pra não atrapalhar o fgets
    printf("\nDigite o nome da cidade(Ex.:São Paulo):\n- ");
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;
    printf("\nDigite o numero de habitantes da cidade:\n- ");
    scanf("%lu", &populacao2);
    printf("\nDigite a área da cidade em km²:\n- ");
    scanf("%f", &area2);
    printf("\nDigite o PIB da cidade\nUse números decimais em bilhões(Ex.:2152.21):\n- ");
    scanf("%f", &pib2);
    printf("\nDigite o número de pontos turísticos da cidade:\n- ");
    scanf("%d", &pontosTurist2);

    //Avisos
    printf("\nSua segunda carta foi criada!\n");
    printf("Veja os dados das duas cartas criadas abaixo:\n");

    //Cálculo de PIB per capita e Densidade populacional
    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;
    // PIB é exibido em bilhões mas o input pede um numero decimal (Ex. 213.23) então aqui é multiplicado por 1000000000 para o calculo funcionar
    pibPerCapita1 = (float) (pib1 * 1000000000) / populacao1; 
    pibPerCapita2 = (float) (pib2 * 1000000000) / populacao2;
    //Cálculo de Super Poder
    superPoder1 = (float) populacao1 + area1 + pib1 + pibPerCapita1 + (1 / densidade1);
    superPoder2 = (float) populacao2 + area2 + pib2 + pibPerCapita2 + (1 / densidade2);
    
    //Exibição das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTurist1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTurist2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    //Comparação de cartas
    printf("\nComparação de Cartas:\n");
    printf("\nPopulação:\n");
    if(populacao1>populacao2){
        printf("Carta 1 venceu! (%lu > %lu)", populacao1, populacao2);
    } else {
        printf("Carta 2 venceu! (%lu > %lu)", populacao2, populacao1);
    }
    printf("\nÁrea:\n");
    if(area1>area2){
        printf("Carta 1 venceu! (%.2f > %.2f)", area1, area2);
    } else {
        printf("Carta 2 venceu! (%.2f > %.2f)", area2, area1);
    }
    printf("\nPIB:\n");
    if(pib1>pib2){
        printf("Carta 1 venceu! (%.2f > %.2f)", pib1, pib2);
    } else {
        printf("Carta 2 venceu! (%.2f > %.2f)", pib2, pib1);
    }
    printf("\nPontos Turísticos:\n");
    if(pontosTurist1>pontosTurist2){
        printf("Carta 1 venceu! (%d > %d)", pontosTurist1, pontosTurist2);
    } else {
        printf("Carta 2 venceu! (%d > %d)", pontosTurist1, pontosTurist1);
    }
    printf("\nDensidade Populacional:\n");
    if(densidade1>densidade2){
        printf("Carta 1 venceu! (%.2f > %.2f)", densidade1, densidade2);
    } else {
        printf("Carta 2 venceu! (%.2f > %.2f)", densidade2, densidade1);
    }
    printf("\nPIB per capita:\n");
    if(pibPerCapita1>pibPerCapita2){
        printf("Carta 1 venceu! (%.2f > %.2f)", pibPerCapita1, pibPerCapita2);
    } else {
        printf("Carta 2 venceu! (%.2f > %.2f)", pibPerCapita2, pibPerCapita1);
    }
    printf("\nSuper Poder:\n");
    if(superPoder1>superPoder2){
        printf("Carta 1 venceu! (%.2f > %.2f)", superPoder1, superPoder2);
    } else {
        printf("Carta 2 venceu! (%.2f > %.2f)", superPoder2, superPoder1);
    }

    /*
    printf("\nComparação de Cartas:\n");
    printf("Populaçao: Carta %d venceu (%d)\n", (populacao1 < populacao2) + 1, populacao1 < populacao2);
    printf("Área: Carta %d venceu (%d)\n", (area1 < area2) + 1, area1 < area2);
    printf("PIB: Carta %d venceu (%d)\n", (pib1 < pib2) + 1, pib1 < pib2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontosTurist1 < pontosTurist2) + 1, pontosTurist1 < pontosTurist2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 > densidade2) + 1, densidade1 > densidade2);
    printf("PIB per capita: Carta %d venceu (%d)\n", (pibPerCapita1 < pibPerCapita2) + 1, pibPerCapita1 < pibPerCapita2);
    printf("Super poder: Carta %d venceu (%d)\n", (superPoder1 < superPoder2) + 1, superPoder1 < superPoder2);
    */

    return 0;
}

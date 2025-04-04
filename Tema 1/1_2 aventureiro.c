#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    //Variáveis Primeira Carta - Segunda Carta
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTurist1, pontosTurist2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;


    //Boas vindas e explicação da premissa do programa
    printf("Bem-vindo ao Super Trunfo Países!\n");
    printf("Você cadastrará duas cartas.\nComece cadastrando a primeira seguindo as instruções abaixo.\n");
    
    printf("\n=======\ Primeira Carta =======\n"); 
    //Cadastro da primeira carta
    printf("Digite a letra que representará o estado da sua carta\nApenas uma letra do alfabeto entre A-H (Ex.: A, B, etc.):\n- ");
    scanf(" %c", &estado1);
    printf("\nDigite o código da carta\nUse a letra do estado seguido de um número de 01-04(Ex.: A01, A02, etc):\n- ");
    scanf("%s", codigo1);
    getchar(); //Consome a linha que sobrou do scanf pra não atrapalhar o fgets
    printf("\nDigite o nome da cidade(Ex.:São Paulo):\n- ");
    fgets(cidade1, 50, stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;
    printf("\nDigite o numero de habitantes da cidade:\n- ");
    scanf("%d", &populacao1);
    printf("\nDigite a área da cidade em km²:\n- ");
    scanf("%f", &area1);
    printf("\nDigite o PIB da cidade\nUse números decimais em bilhões(Ex.:2152.21):\n- ");
    scanf("%f", &pib1);
    printf("\nDigite o número de pontos turísticos da cidade:\n- ");
    scanf("%d", &pontosTurist1);

    //Cálculo de PIB per capita e Densidade populacional da carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (float) ((pib1 * 1000000000) / populacao1); 
    /* Pib é exibido em bilhões mas o input pede um numero decimal (Ex. 213.23) 
    então aqui é multiplicado por 1000000000 para o calculo funcionar */
    
    
    //Avisos
    printf("\nSua primeira carta foi criada!\n");
    printf("Siga as instruções abaixo para a criação da segunda.\n");

    printf("\n=======\ Segunda Carta =======\n");
    //Cadastro da segunda carta
    printf("Digite a letra que representará o estado da sua carta\nApenas uma letra do alfabeto entre A-H (Ex.: A, B, etc.):\n- ");
    scanf(" %c", &estado2);
    printf("\nDigite o código da carta\nUse a letra do estado seguido de um número de 01-04(Ex.: A01, A02, etc):\n- ");
    scanf("%s", codigo2);
    getchar(); //Consome a linha que sobrou do scanf pra não atrapalhar o fgets
    printf("\nDigite o nome da cidade(Ex.:São Paulo):\n- ");
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;
    printf("\nDigite o numero de habitantes da cidade:\n- ");
    scanf("%d", &populacao2);
    printf("\nDigite a área da cidade em km²:\n- ");
    scanf("%f", &area2);
    printf("\nDigite o PIB da cidade\nUse números decimais em bilhões(Ex.:2152.21):\n- ");
    scanf("%f", &pib2);
    printf("\nDigite o número de pontos turísticos da cidade:\n- ");
    scanf("%d", &pontosTurist2);

    //Cálculo de PIB per capita e Densidade populacional da carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (float) ((pib2 * 1000000000) / populacao2);
    /* Pib é exibido em bilhões mas o input pede um numero decimal (Ex. 213.23) 
    então aqui é multiplicado por 1000000000 para o calculo funcionar */

    //Avisos
    printf("\nSua segunda carta foi criada!\n");
    printf("Veja os dados das duas cartas criadas abaixo:\n");

    
    
    //Exibição das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTurist1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTurist2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}

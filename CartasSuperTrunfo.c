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

    //Boas vindas e explicação da premissa do programa
    printf("Bem-vindo ao Super Trunfo Países!\n");
    printf("Você cadastrará duas cartas, comece cadastrando a primeira, siga as instruções abaixo.\n");
    
    printf("\n== Primeira Carta ==\n");
    //Cadastro da primeira carta
    printf("Digite a letra que representará o estado da sua carta (Apenas uma letra do alfabeto entre A-H):\n");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (Use a letra do estado seguido de um número de 01-04(Exemplo: A01, A02, etc)):\n");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade1);
    printf("Digite o numero de habitantes da cidade:\n");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &pontosTurist1);
    printf("\nSua primeira carta foi criada!\n");
    printf("Siga as instruções abaixo para a criação da segunda.\n");

    printf("\n== Segunda Carta ==\n");
    //Cadastro da segunda carta
    printf("Digite a letra que representará o estado da sua carta (Apenas uma letra do alfabeto entre A-H):\n");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (Use a letra do estado seguido de um número de 01-04(Exemplo: A01, A02, etc)):\n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade2);
    printf("Digite o numero de habitantes da cidade:\n");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &pontosTurist2);

    printf("Sua segunda carta foi criada!\n");
    printf("Veja os dados das duas cartas criadas abaixo:\n");
    
    //Exibição das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %fkm²\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTurist1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTurist2);

    return 0;
}

#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    //Variáveis Primeira Carta - Segunda Carta
    char estado1 = 'A', estado2 = 'B';
    char codigo1[5] = "A01", codigo2[5] = "B02";
    char cidade1[50] = "São Paulo", cidade2[50] = "Rio de Janeiro";
    unsigned long int populacao1 = 12325000, populacao2 = 6748000;
    float area1 = 1521.11, area2 = 1200.25;
    float pib1 = 699.28, pib2 = 300.50;
    int pontosTurist1 = 50,  pontosTurist2 = 30;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;
    int escolha;
    int comparacao1, comparacao2;


    //Boas vindas
    printf("Bem-vindo ao Super Trunfo Países!\n");
    
    //Cálculo de PIB per capita e Densidade populacional
    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;
    // PIB é exibido em bilhões mas o input pede um numero decimal (Ex. 213.23) então aqui é multiplicado por 1000000000 para o calculo funcionar
    pibPerCapita1 = (float) (pib1 * 1000000000) / populacao1; 
    pibPerCapita2 = (float) (pib2 * 1000000000) / populacao2;
    //Cálculo de Super Poder
    superPoder1 = (float) populacao1 + area1 + pib1 + pibPerCapita1 + (1 / densidade1);
    superPoder2 = (float) populacao2 + area2 + pib2 + pibPerCapita2 + (1 / densidade2);
    
    //Escolha de atributo pra comparar
    printf("\nComparação de Cartas:\n");
    printf("\nEscolha o atributo que será usado para comparar as cartas\n");
    printf("\n1. População");
    printf("\n2. Área");
    printf("\n3. PIB");
    printf("\n4. Número de pontos turísticos");
    printf("\n5. Densidade demográfica\n\n");

    printf("- ");
    scanf("%d", &escolha);

    printf("\nPaises %s e %s serão comparados:\n", codigo1, codigo2);

    //Comparação de Atributos
    switch (escolha)
    {
    case 1:
        printf("O atributo escolhido pra comparação foi: População\n");
        printf("População do país %s: %lu\nPopulação do país %s: %lu\n", codigo1, populacao1, codigo2,populacao2);
        if (populacao1 > populacao2)
        {
            printf("Carta 1 venceu!");
        } else if (populacao2 > populacao1)
        {
            printf("Carta 2 venceu!");
        } else {
            printf("Houve um empate!");
        }
        break;
    case 2:
        printf("\nO atributo escolhido pra comparação foi: Área\n");
        printf("Área do país %s: %.2f\nÁrea do país %s: %.2f\n", codigo1, area1, codigo2,area2);
        if (area1 > area2)
        {
            printf("Carta 1 venceu!");
        } else if (area2 > area1)
        {
            printf("Carta 2 venceu!");
        } else {
            printf("Houve um empate!");
        }
        break;
    case 3:
        printf("\nO atributo escolhido pra comparação foi: PIB\n");
        printf("PIB do país %s: %.2f\nPIB do país %s: %.2f\n", codigo1, pib1, codigo2,pib2);
        if (pib1 > pib2)
        {
            printf("Carta 1 venceu!");
        } else if (pib2 > pib1)
        {
            printf("Carta 2 venceu!");
        } else {
            printf("Houve um empate!");
        }
        break;
    case 4:
        printf("\nO atributo escolhido pra comparação foi: Número de Pontos Turísticos\n");
        printf("Pontos turísticos de país %s: %d\nPontos turísticos de país %s: %d\n", codigo1, pontosTurist1, codigo2,pontosTurist2);
        if (pontosTurist1 > pontosTurist2)
        {
            printf("Carta 1 venceu!");
        } else if (pontosTurist2 > pontosTurist1)
        {
            printf("Carta 2 venceu!");
        } else {
            printf("Houve um empate!");
        }
        break;
    case 5:
        printf("\nO atributo escolhido pra comparação foi: Densidade demográfica\n");
        printf("Densidade demográfica de país %s: %.2f\nDensidade demográfica de país %s: %.2f\n", codigo1, densidade1, codigo2,densidade2);
        if (densidade1 < densidade2)
        {
            printf("Carta 1 venceu!");
        } else if (densidade2 < densidade1)
        {
            printf("Carta 2 venceu!");
        } else {
            printf("Houve um empate!");
        }
    break; 

    default:
        printf("Opção inválida!");
    break;
    }
    
    return 0;
}

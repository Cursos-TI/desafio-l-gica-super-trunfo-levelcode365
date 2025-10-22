#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    
    //Declarações de variaveis para uso do programa e seus valores.
    // Carta 1
    char estado1[20];
    char codigo1[5];
    char nomeCidade1[50];
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidadePopulacional1, pibPerCapita1;
    //Carta 2
    char estado2[20];
    char codigo2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidadePopulacional2, pibPerCapita2;

    // ===== Cadastro das cartas =====
    //interação com o usuário no terminal - carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Codigo da carta: ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);
    //Cálculos automáticos
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    //interação com o usuário no terminal - carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Codigo da carta: ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos automáticos
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
        // ===== Escolha do atributo de comparação =====
    printf("\n=== Comparação de Cartas (Atributo: PIB per capita) ===\n");
    printf("%s (%s): %.2f\n", nomeCidade1, estado1, pibPerCapita1);
    printf("%s (%s): %.2f\n", nomeCidade2, estado2, pibPerCapita2);

    // ===== Comparação das cartas =====
    if (pibPerCapita1 > pibPerCapita2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    // ===== Exibição de informações adicionais =====
    printf("\n--- Detalhes adicionais ---\n");
    printf("%s - Densidade Populacional: %.2f hab/km²\n", nomeCidade1, densidadePopulacional1);
    printf("%s - Densidade Populacional: %.2f hab/km²\n", nomeCidade2, densidadePopulacional2);

    return 0;
    //Nota do aluno : Eu entendo q esse código está avançado para o momento do curso, mas quero esclarecer q eu já sei programar por
    //ter cursos por fora da universidade e tbm por trabalhar na area a alguns anos.
}

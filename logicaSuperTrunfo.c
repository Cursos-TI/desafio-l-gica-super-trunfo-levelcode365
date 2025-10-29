#include <stdio.h>

// Super Trunfo - Nível Mestre
// Autor: Nicolas Felipe
// Comparação de cartas usando 2 atributos

int main() {
    // Variáveis das cartas
    char nomeCidade1[50], estado1[20], codigo1[5];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidadePopulacional1, pibPerCapita1;

    char nomeCidade2[50], estado2[20], codigo2[5];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidadePopulacional2, pibPerCapita2;

    // Cadastro Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado: "); scanf("%s", estado1);
    printf("Código: "); scanf("%s", codigo1);
    printf("Nome da cidade: "); scanf(" %[^\n]", nomeCidade1);
    printf("População: "); scanf("%d", &populacao1);
    printf("Área (km²): "); scanf("%f", &area1);
    printf("PIB (em bilhões): "); scanf("%f", &pib1);
    printf("Pontos turísticos: "); scanf("%d", &pontosTuristicos1);

    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // Cadastro Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado: "); scanf("%s", estado2);
    printf("Código: "); scanf("%s", codigo2);
    printf("Nome da cidade: "); scanf(" %[^\n]", nomeCidade2);
    printf("População: "); scanf("%d", &populacao2);
    printf("Área (km²): "); scanf("%f", &area2);
    printf("PIB (em bilhões): "); scanf("%f", &pib2);
    printf("Pontos turísticos: "); scanf("%d", &pontosTuristicos2);

    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Menu Dinâmico
    int attr1, attr2;

    printf("\n=== Escolha o primeiro atributo ===\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica (menor vence)\n");
    printf("Opção: "); scanf("%d", &attr1);

    do {
        printf("\n=== Escolha o segundo atributo (diferente do primeiro) ===\n");
        printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica (menor vence)\n");
        printf("Opção: "); scanf("%d", &attr2);

        if(attr2 == attr1) printf("❌ O segundo atributo deve ser diferente do primeiro!\n");
    } while(attr2 == attr1);

    // Função para comparar atributos e retornar pontuação
    float valor1_attr1, valor2_attr1, valor1_attr2, valor2_attr2;

    // Atributo 1
    switch(attr1) {
        case 1: valor1_attr1 = populacao1; valor2_attr1 = populacao2; break;
        case 2: valor1_attr1 = area1; valor2_attr1 = area2; break;
        case 3: valor1_attr1 = pib1; valor2_attr1 = pib2; break;
        case 4: valor1_attr1 = pontosTuristicos1; valor2_attr1 = pontosTuristicos2; break;
        case 5: valor1_attr1 = densidadePopulacional1; valor2_attr1 = densidadePopulacional2; break;
        default: valor1_attr1 = valor2_attr1 = 0; break;
    }

    // Atributo 2
    switch(attr2) {
        case 1: valor1_attr2 = populacao1; valor2_attr2 = populacao2; break;
        case 2: valor1_attr2 = area1; valor2_attr2 = area2; break;
        case 3: valor1_attr2 = pib1; valor2_attr2 = pib2; break;
        case 4: valor1_attr2 = pontosTuristicos1; valor2_attr2 = pontosTuristicos2; break;
        case 5: valor1_attr2 = densidadePopulacional1; valor2_attr2 = densidadePopulacional2; break;
        default: valor1_attr2 = valor2_attr2 = 0; break;
    }

    // Calcular pontuação considerando densidade demográfica
    float pont1 = 0, pont2 = 0;

    // Atributo 1
    if(attr1 == 5) {
        pont1 += (valor1_attr1 < valor2_attr1) ? 1 : 0;
        pont2 += (valor2_attr1 < valor1_attr1) ? 1 : 0;
    } else {
        pont1 += (valor1_attr1 > valor2_attr1) ? 1 : 0;
        pont2 += (valor2_attr1 > valor1_attr1) ? 1 : 0;
    }

    // Atributo 2
    if(attr2 == 5) {
        pont1 += (valor1_attr2 < valor2_attr2) ? 1 : 0;
        pont2 += (valor2_attr2 < valor1_attr2) ? 1 : 0;
    } else {
        pont1 += (valor1_attr2 > valor2_attr2) ? 1 : 0;
        pont2 += (valor2_attr2 > valor1_attr2) ? 1 : 0;
    }

    // Soma dos valores dos atributos
    float soma1 = valor1_attr1 + valor1_attr2;
    float soma2 = valor2_attr1 + valor2_attr2;

    // Resultado
    printf("\n=== Resultado da Comparação ===\n");
    printf("%s vs %s\n", nomeCidade1, nomeCidade2);
    printf("Atributo 1: %.2f x %.2f\n", valor1_attr1, valor2_attr1);
    printf("Atributo 2: %.2f x %.2f\n", valor1_attr2, valor2_attr2);
    printf("Soma dos atributos: %.2f x %.2f\n", soma1, soma2);

    if(soma1 > soma2) printf(" Vencedor: %s\n", nomeCidade1);
    else if(soma2 > soma1) printf(" Vencedor: %s\n", nomeCidade2);
    else printf(" Empate!\n");

    printf("\n--- Fim da rodada ---\n");
    return 0;
}

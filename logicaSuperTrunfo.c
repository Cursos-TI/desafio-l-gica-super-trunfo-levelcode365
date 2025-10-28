#include <stdio.h>

// Desafio Super Trunfo - Nível Aventureiro
// Tema: Interatividade no Super Trunfo
// Desenvolvido por: Nicolas Felipe
// Observação: Código adaptado com menu interativo e comparações dinâmicas entre cartas

int main() {
    // Declaração das variáveis das duas cartas
    char estado1[20], codigo1[5], nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidadePopulacional1, pibPerCapita1;

    char estado2[20], codigo2[5], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidadePopulacional2, pibPerCapita2;

    // ===== Cadastro das cartas =====
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Código da carta: ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Código da carta: ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // ===== Menu Interativo =====
    int opcao;
    printf("\n=== Escolha o atributo para comparação ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (menor vence)\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\n=== Resultado da Comparação ===\n");

    // ===== Switch de Comparação =====
    switch (opcao) {
        case 1:
            printf("Atributo escolhido: População\n");
            printf("%s: %d habitantes\n", nomeCidade1, populacao1);
            printf("%s: %d habitantes\n", nomeCidade2, populacao2);

            if (populacao1 > populacao2)
                printf("Vencedor: %s \n", nomeCidade1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s \n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Atributo escolhido: Área\n");
            printf("%s: %.2f km²\n", nomeCidade1, area1);
            printf("%s: %.2f km²\n", nomeCidade2, area2);

            if (area1 > area2)
                printf("Vencedor: %s \n", nomeCidade1);
            else if (area2 > area1)
                printf("Vencedor: %s \n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Atributo escolhido: PIB\n");
            printf("%s: %.2f bilhões\n", nomeCidade1, pib1);
            printf("%s: %.2f bilhões\n", nomeCidade2, pib2);

            if (pib1 > pib2)
                printf("Vencedor: %s \n", nomeCidade1);
            else if (pib2 > pib1)
                printf("Vencedor: %s \n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Atributo escolhido: Pontos Turísticos\n");
            printf("%s: %d pontos\n", nomeCidade1, pontosTuristicos1);
            printf("%s: %d pontos\n", nomeCidade2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Vencedor: %s \n", nomeCidade1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Vencedor: %s \n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Atributo escolhido: Densidade Demográfica (menor vence)\n");
            printf("%s: %.2f hab/km²\n", nomeCidade1, densidadePopulacional1);
            printf("%s: %.2f hab/km²\n", nomeCidade2, densidadePopulacional2);

            if (densidadePopulacional1 < densidadePopulacional2)
                printf("Vencedor: %s \n", nomeCidade1);
            else if (densidadePopulacional2 < densidadePopulacional1)
                printf("Vencedor: %s \n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("❌ Opção inválida! Escolha um número de 1 a 5.\n");
            break;
    }

    printf("\n--- Fim da partida ---\n");
    return 0;
}

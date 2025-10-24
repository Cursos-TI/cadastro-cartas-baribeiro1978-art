// super_trunfo.c
// Nível Aventureiro - Calcula Densidade Populacional e PIB per Capita
// Regras mantidas: sem laços (for/while) e sem decisões (if/else).
// Observação importante de unidade: PIB deve ser digitado em BILHÕES de reais (ex.: 699.28)

#include <stdio.h>

int main(void) {
    // ===== Carta 1: variáveis de entrada =====
    char  estado1;          // 'A' a 'H'
    char  codigo1[4];       // ex.: "A01"
    char  cidade1[100];     // nome com espaços
    int   populacao1;       // habitantes
    float area1;            // km²
    float pib1_bilhoes;     // PIB em bilhões de R$
    int   pontos1;

    // ===== Carta 2: variáveis de entrada =====
    char  estado2;
    char  codigo2[4];
    char  cidade2[100];
    int   populacao2;
    float area2;
    float pib2_bilhoes;     // PIB em bilhões de R$
    int   pontos2;

    // ===== Variáveis calculadas (float) =====
    float densidade1;       // hab/km²
    float densidade2;       // hab/km²
    float pibpc1;           // R$ por habitante
    float pibpc2;           // R$ por habitante

    // ========== Entrada da Carta 1 ==========
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta (ex: A01): ");
    scanf(" %3s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %99[^\n]", cidade1);

    printf("Populacao: ");
    scanf(" %d", &populacao1);

    printf("Area em km2: ");
    scanf(" %f", &area1);

    printf("PIB (em BILHOES de reais, ex.: 699.28): ");
    scanf(" %f", &pib1_bilhoes);

    printf("Numero de pontos turisticos: ");
    scanf(" %d", &pontos1);

    // ========== Entrada da Carta 2 ==========
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta (ex: B03): ");
    scanf(" %3s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %99[^\n]", cidade2);

    printf("Populacao: ");
    scanf(" %d", &populacao2);

    printf("Area em km2: ");
    scanf(" %f", &area2);

    printf("PIB (em BILHOES de reais, ex.: 300.50): ");
    scanf(" %f", &pib2_bilhoes);

    printf("Numero de pontos turisticos: ");
    scanf(" %d", &pontos2);

    // ========== Cálculos ==========
    // Densidade = população / área (hab/km²)
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    // PIB per Capita = (PIB em reais) / população
    // Como o usuário informou em BILHÕES, multiplicamos por 1e9 para converter para reais.
    pibpc1 = (pib1_bilhoes * 1e9f) / (float)populacao1;
    pibpc2 = (pib2_bilhoes * 1e9f) / (float)populacao2;

    // ========== Saída formatada ==========
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1_bilhoes);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpc1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2_bilhoes);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpc2);

    return 0;
}

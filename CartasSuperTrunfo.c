#include <stdio.h>

// Aluno: Dionatha Tavares - Engenharia de Software

int main() {
    int populacao1, pontosturisticos1;
    float area1, PIB1;

//cadastro da primeira carta

    printf("Primeira carta \n");
    printf("\nPopulação: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &PIB1);

    printf("Pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

// resultados primeira carta

    printf("\n CARTA 01: \n");
    printf("\n-População: %d\n", populacao1);
    printf("-Área: %.4f\n", area1);
    printf("-PIB: %.4f\n", PIB1);
    printf("-Pontos turísticos: %d\n", pontosturisticos1);

    int populacao2, pontosturisticos2;
    float area2, PIB2;

 //cadastro da segunda carta

    printf("\nSegunda carta\n");
    printf("\nPopulação: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &PIB2);

    printf("Pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    // resultados segunda carta

    printf("\n CARTA 02: \n");
    printf("\n-População: %d\n", populacao2);
    printf("-Área: %.4f\n", area2);
    printf("-PIB: %.4f\n", PIB2);
    printf("-Pontos turístico: %d\n", pontosturisticos2);

    return 0;
}

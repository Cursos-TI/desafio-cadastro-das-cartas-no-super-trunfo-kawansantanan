#include <stdio.h>

int main()
{
    printf("carta 1\n");

    char estado1;
    char codigo1;
    char nome1;
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
   

    printf("estado: ");
    scanf("%s", &estado1);
    printf("codigo da carta: ");
    scanf("%s", &codigo1);
    printf("nome da cidade: ");
    scanf("%s", &nome1);
    printf("população: ");
    scanf("%d", &populacao1);
    printf("área em Km: ");
    scanf("%f", &area1);
    printf("pib: ");
    scanf("%f", &pib1);
    printf("pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    float densidadedemografica1 = populacao1 / area1;
    float pibpercapita1 = pib1 / populacao1;
    printf("A densidade demográfica é: %.2f\n", densidadedemografica1);
    printf("A pibpercapita é : %.2f", pibpercapita1);
   
    printf("%f\n", pibpercapita1);

    printf("\n");

    char estado2;
    char codigo2;
    char nome2;
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
   

    printf("carta 2\n");

    printf("estado: ");
    scanf("%s", &estado2);
    printf("codigo da carta: ");
    scanf("%s", &codigo2);
    printf("nome da cidade: ");
    scanf("%s", &nome2);
    printf("população: ");
    scanf("%d", &populacao2);
    printf("área em Km: ");
    scanf("%f", &area2);
    printf("pib:");
    scanf("%f", &pib2);
    printf("pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    float densidadedemografica2 = populacao2 / area2;
    float pibpercapita2 = pib2 / populacao2;
    printf("A densidade demográfica é: %.2f\n", densidadedemografica2);
    printf("A pibpercapita é : %.2f", pibpercapita2);
}

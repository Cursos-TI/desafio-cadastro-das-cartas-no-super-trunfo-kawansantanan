#include <stdio.h>

int main()
{
    printf("carta 1\n");

    char estadoA;
    char codigoA;
    char nomeA;
    int populacaoA;
    float areaA;
    float pibA;
    int pontosturisticosA;
   

    printf("estado: ");
    scanf("%s", &estadoA);
    printf("codigo da carta: ");
    scanf("%s", &codigoA);
    printf("nome da cidade: ");
    scanf("%s", &nomeA);
    printf("população: ");
    scanf("%d", &populacaoA);
    printf("área em Km: ");
    scanf("%f", &areaA);
    printf("pib: ");
    scanf("%f", &pibA);
    printf("pontos turísticos: ");
    scanf("%d", &pontosturisticosA);

    double densidadedemograficaA = populacaoA / areaA;
    double pibpercapitaA = pibA / populacaoA;

    printf("densidade demográfica : %.2f\n", densidadedemograficaA);
    printf("pib per capita : %.2f\n", pibpercapitaA);

    printf("\n");

    char estadoB;
    char codigoB;
    char nomeB;
    int populacaoB;
    float areaB;
    float pibB;
    int pontosturisticosB;
   

    printf("carta 2\n");

    printf("estado: ");
    scanf("%s", &estadoB);
    printf("codigo da carta: ");
    scanf("%s", &codigoB);
    printf("nome da cidade: ");
    scanf("%s", &nomeB);
    printf("população: ");
    scanf("%d", &populacaoB);
    printf("área em Km: ");
    scanf("%f", &areaB);
    printf("pib:");
    scanf("%f", &pibB);
    printf("pontos turísticos: ");
    scanf("%d", &pontosturisticosB);

    double densidadedemograficaB = populacaoB / areaB;
    double pibpercapitaB = pibB / populacaoB;

    printf("densidade demográfica : %.2f\n", densidadedemograficaB);
    printf("pib per capita : %.2f\n", pibpercapitaB);
}

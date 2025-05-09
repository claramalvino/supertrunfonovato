#include <stdio.h>

int main () {

    char estado1, estado2;
    char codigo1[20], codigo2[20];
    char nomecidade1[20], nomecidade2[20];
    int populacao1, populacao2;
    float area1, area2; 
    float pib1, pib2;
    int ptsturisticos1, ptsturisticos2;

    printf("Insira os dados da carta 1\n");
    printf("Insira a inicial do estado 1:\n");
    scanf("%c", &estado1);
    printf("A inicial é: %c\n", estado1);

    printf("Insirao código da carta do estado 1:\n");
    scanf("%s", &codigo1);
    printf("O código é: %s\n", codigo1);

    printf("Insira o nome da cidade do estado 1:\n");
    scanf("%s", &nomecidade1);
    printf("O nome da cidade é é: %s\n", nomecidade1);

    printf("Insira a população do estado 1:\n");
    scanf("%i", &populacao1);
    printf("A população é de: %i\n", populacao1);

    printf("Insira a area do estado 1:\n");
    scanf("%f", &area1);
    printf("O area é de: %f\n", area1);

    printf("Insira o pib do estado 1:\n");
    scanf("%f", &pib1);
    printf("O pib é de: %f\n", pib1);

    printf("Insira a quantidade de pontos turísticos do estado 1:\n");
    scanf("%i", &ptsturisticos1);
    printf("A quantidade de pontos turísticos são de: %i\n", ptsturisticos1);



   printf("Insira os dados da carta 2\n");
    printf("Insira a inicial do estado 2:\n");
    scanf("%c", &estado2);
    printf("A inicial é: %c\n", estado2);

    printf("Insirao código da carta do estado 2:\n");
    scanf("%s", &codigo2);
    printf("O código é: %s\n", codigo2);

    printf("Insira o nome da cidade do estado 2:\n");
    scanf("%s", &nomecidade2);
    printf("O nome da cidade é: %s\n", nomecidade2);

    printf("Insira a população do estado 2:\n");
    scanf("%i", &populacao2);
    printf("A população é de: %f\n", populacao2);

    printf("Insira a area do estado 2:\n");
    scanf("%f", &area2);
    printf("O area é de: %f\n", area2);

    printf("Insira o pib do estado 2:\n");
    scanf("%f", &pib2);
    printf("O pib é de: %f\n", pib2);

    printf("Insira a quantidade de pontos turísticos do estado 2:\n");
    scanf("%i", &ptsturisticos2);
    printf("A quantidade de pontos turísticos são de: %i\n", ptsturisticos2);



    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, j;
    j = 5;

    char nome[j][200];
    int idade[j], maiorIdade, menorIdade = 999;
    float maiorPeso, menorPeso = 999, maiorAltura, menorAltura = 999;
    float altura[j], peso[j];

    for (i = 0; i < j; i++)
    {
        printf("Digite seu Nome: ");
        scanf("%s", &nome[i]);

        printf("Digite sua Idade: ");
        scanf("%d", &idade[i]);

        printf("Digite sua Altura: ");
        scanf("%f", &altura[i]);

        printf("Digite seu Peso: ");
        scanf("%f", &peso[i]);

        maiorIdade = idade[i] > maiorIdade ? idade[i] : maiorIdade;
        menorIdade = idade[i] < menorIdade ? idade[i] : menorIdade;

        maiorAltura = altura[i] > maiorAltura ? altura[i] : maiorAltura;
        menorAltura = altura[i] < menorAltura ? altura[i] : menorAltura;

        maiorPeso = peso[i] > maiorPeso ? peso[i] : maiorPeso;
        menorPeso = peso[i] < menorPeso ? peso[i] : menorPeso;
    }

    system("cls");

    printf("\n");
    for (i = 0; i < j; i++)
    {

        printf(" %d Pessoa \n", i + 1);

        printf("Nome: %s \n", nome[i]);

        printf("idade: %d \n", idade[i]);

        printf("Altura: %.2f \n", altura[i]);

        printf("Peso: %.2f \n", peso[i]);
        printf("\n");
    }

    printf("Maior Idade: %d \n", maiorIdade);
    printf("Menor Idade: %d \n", menorIdade);
    printf("\n");

    printf("Maior Altura: %.2f \n", maiorAltura);
    printf("Menor Altura: %.2f \n", menorAltura);
    printf("\n");

    printf("Maior Peso: %.2f \n", maiorPeso);
    printf("Menor Peso: %.2f \n", menorPeso);
    printf("\n");

    return 0;
}
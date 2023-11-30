#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, j;
    int q = 5;
    int num[q];

    int soma = 0, somaPar = 0;

    int maiorNumero = 0, menorNumero = 999;
    int contadorPar = 0, contadorImpar = 0, contadorNegativo = 0;

    float media, mediaPar;

    for (i = 0; i < q; i++)
    {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &num[i]);

        if (num[i] % 2 == 0)
        {
            somaPar = somaPar + num[i];
            contadorPar++;
        }
        if (num[i] % 2 != 0)
        {
            contadorImpar++;
        }
        if (num[i] % 2 != 0 && num[i] < 0)
        {
            contadorNegativo++;
        }

        maiorNumero = num[i] > maiorNumero ? num[i] : maiorNumero;
        menorNumero = num[i] < menorNumero ? num[i] : menorNumero;

        soma = soma + num[i];
    }
    mediaPar = somaPar / contadorPar;
    media = soma / j;

    system("cls");

    printf("\n");
    printf("Quantidade de Numeros Impares: %d \n", contadorImpar);
    printf("Quantidade de Numeros Negativos: %d \n", contadorNegativo);

    printf("\n");
    printf("Maior Numero: %d \n", maiorNumero);
    printf("Menor Numero: %d \n", menorNumero);
    printf("\n");

    printf("Media de Numeros Inseridos: %.2f \n", media);
    printf("Media de Numeros Pares: %.2f \n", mediaPar);
    printf("\n");

    return 0;
}
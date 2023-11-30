#include <stdio.h>
#include <stdlib.h>

int main()
{

    int q = 5;
    int n = 3;

    int i, j;
    char nome[q][200];
    int idade[q];
    float nota[q][n], media[q];
    float soma = 0;

    for (i = 0; i < q; i++)
    {
        printf("%d Aluno: ", i + 1);
        scanf("%s", &nome[i]);

        printf("Idade: ");
        scanf("%d", &idade[i]);

        for (j = 0; j < n; j++)
        {
            printf("%d Nota: ", j + 1);
            scanf("%f", &nota[i][j]);

            soma = soma + nota[i][j];
        }

        media[i] = soma / n;

        soma = 0;

        system("cls");
    }

    system("cls");

    printf("\n");

    for (i = 0; i < q; i++)
    {
        printf("%d Aluno: %s \n", i + 1, nome[i]);

        printf("Idade: %d \n", idade[i]);

        for (j = 0; j < n; j++)
        {
            printf("%d Nota: %.2f \n", i + 1, nota[i][j]);
        }
        printf("Media: %.2f \n", media[i]);

        if (media[i] >= 7)
        {
            printf("Aprovado! \n");
        }
        else if (media[i] >= 5)
        {
            printf("Recuperacao. \n");
        }
        else
        {
            printf("Reprovado.... \n");
        }
        printf("\n");
    }

    return 0;
}
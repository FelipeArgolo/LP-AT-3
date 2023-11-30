#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, j = 0;
    int codigo = 0;

    char nome[j][200];
    int telefone[j];

    do
    {
        system("cls");

        printf("Digite seu Nome: ");
        scanf("%s", &nome[j]);
        printf("Digite seu Telefone: ");
        scanf("%d", &telefone[j]);

        printf("\n");
        printf("1: para adiconar mais 1 pessoa \n2: para mostrar a agenda\n");
        scanf("%d", &codigo);

        j++;
    } while (codigo != 2);

    system("cls");

    printf("\n");

    for (i = 0; i < j; i++)
    {
        printf("%d Nome: %s \n", i + 1, nome[i]);
        printf("Telefone: %d \n", telefone[i]);

        printf("\n");
    }

    return 0;
}
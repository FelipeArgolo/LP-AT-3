#include <stdio.h>
#include <stdlib.h>

int main()
{

    int codigo = 0, compra = 0;
    int stockUm = 6, stockDois = 3, stockTres = 8, quantidade = 0;
    float resultado = 0;

    do
    {

        printf("Adicionar uma venda ? \n1: para Sim\n2: para exibir o total de ventas: ");
        scanf("%d", &codigo);
        printf("\n");
        switch (codigo)
        {
        case 1:

            
            printf("==============    Menu   ============== \n");
            printf("1 |Ventilador| R$: 160,60 | Stock: %d | \n", stockUm);
            printf("2 |Cadeira G.| R$: 200,60 | Stock: %d | \n", stockDois);
            printf("3 |Teclado   | R$: 60,60  | Stock: %d | \n", stockTres);
            printf("=======================================\n");
            printf("\n");
            printf("selecione os produtos vendidos: ");
            scanf("%d", &compra);

            switch (compra)
            {
            case 1:
                if (stockUm == 0)
                {
                    printf("Sem stock do produto... \n");
                }
                else
                {

                    stockUm = stockUm - 1;
                    resultado = resultado + 160.60;
                    quantidade++;
                }
                break;
            case 2:

                if (stockDois == 0)
                {
                    printf("Sem stock do produto... \n");
                }
                else
                {
                    stockDois = stockDois - 1;
                    resultado = resultado + 200.00;
                    quantidade++;
                }
                break;
            case 3:
                if (stockDois == 0)
                {
                    printf("Sem stock do produto... \n");
                }
                else
                {
                    stockTres = stockTres - 1;
                    resultado = resultado + 60.00;
                    quantidade++;
                }
                break;
            default:
                break;

                break;
            }
        case 2:
        default:
            break;
        }

    } while (codigo != 2);

    system("cls");

    printf("Numero de vendas: %d \n", quantidade);
    printf("Lucro: %.2f \n", resultado);

    return 0;
}
#include <stdio.h>

int main()
{

    int n, d, azul = 0, vermelho = 0, amarelo = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &d);
        if(d <= 35)
        {
            azul = azul + 5;
        }
        else
        {
            if(d <= 70)
            {
                vermelho = vermelho + 3;
            }
            else
            {
                amarelo = amarelo + 4;
            }
        }
    }

    if(azul >= vermelho && azul >= amarelo)
    {
        printf("Azul\n");
    }
    else
    {
        if(amarelo > azul && amarelo >= vermelho)
        {
            printf("Amarelo\n");
        }
        else
        {
            if(vermelho > azul && vermelho > amarelo)
            {
                printf("Vermelho\n");
            }
        }
    }


    return 0;
}
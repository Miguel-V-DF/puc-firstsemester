#include <stdio.h>

int main()
{
    int w, n, wi, vi;

    scanf("%d%d%d%d", &w, &n, &wi, &vi);

    if(n>wi && (wi + vi) > (w + n) && wi >= 0 && vi >= 0 && w % 2 == 0)
    {
        printf("O LOOT COUBE NA MOCHILA!\n");
    }
    else
    {
        printf("O LOOT NAO COUBE NA MOCHILA!\n");
    }


    return 0;
}
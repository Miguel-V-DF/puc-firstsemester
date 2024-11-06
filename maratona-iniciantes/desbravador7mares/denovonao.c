#include <stdio.h>

int main()
{
    int jogos, pontosIniciais, pontosGanhos = 0;
    char c;

    scanf("%d %d", &jogos, &pontosIniciais);

    for(int i = 0; i < jogos; i++)
    {
        scanf(" %c", &c);
        if(c == 'V')
        {
            pontosGanhos = pontosGanhos + 3; 
        }
        else
        {
            if(c == 'E')
            {
                pontosGanhos = pontosGanhos + 1;
            }
        }
    }

    if(pontosGanhos + pontosIniciais >= 49)
    {
        printf("%d Sim\n", pontosGanhos + pontosIniciais);
    }
    else
    {
        printf("%d Nao\n", pontosGanhos + pontosIniciais);
    }

    return 0;
}
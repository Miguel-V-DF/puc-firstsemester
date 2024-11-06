#include <stdio.h>

int main()
{
    int nbr[2];
    while(scanf("%d %d", &nbr[0], &nbr[1]) != EOF)
    {
        unsigned long long int fat[2] = {1, 1};
        for(int i = 0; i < 2; i++)
        {
            for(int j = 2; j <= nbr[i]; j++)
            {
                fat[i] = fat[i] * j;
            }
        }
        printf("%llu\n", fat[0] + fat[1]);
    }

    return 0;
}
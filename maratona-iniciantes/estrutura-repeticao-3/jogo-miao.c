#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        int nbr[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
        int diff[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
        int possible[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
        int freq[100], highestDiff = 0, diffMax = 0, count = 0;
        memset(freq, 0, sizeof(freq));
        for(int j = 0; j < 9; j++)
        {
            scanf("%d", &nbr[j]);
        }
        for(int j = 0; j < 9; j += 3)
        {
            diff[j] = abs(nbr[j] - nbr[j + 1]);
            freq[diff[j]]++;
            diff[j + 1] = abs(nbr[j + 1] - nbr[j]);
            freq[diff[j + 1]]++;
            diff[j + 2] = abs(nbr[j + 2] - nbr[j + 1]);
            freq[diff[j + 2]]++;
        }
        for(int j = 0; j < 100; j++)
        {
            if(freq[j] > diffMax)
            {
                diffMax = freq[j];
                highestDiff = j;
            }
        }

        for(int j = 0; j < 9; j++)
        {
            int is_valid = 1;
            if(j % 3 == 0)
            {
                if(abs(nbr[j] - nbr[j + 1]) == highestDiff || abs(nbr[j] - nbr[j + 2]) == highestDiff)
                {
                    is_valid = 0;
                }
            } 
            else
            {
                if(j % 3 == 1)
                { 
                    if(abs(nbr[j] - nbr[j - 1]) == highestDiff || abs(nbr[j] - nbr[j + 1]) == highestDiff)
                    {
                        is_valid = 0;
                    }
                } 
                else
                {
                    if(abs(nbr[j] - nbr[j - 1]) == highestDiff || abs(nbr[j] - nbr[j - 2]) == highestDiff)
                    {
                        is_valid = 0;
                    }
                }
            }
            if(is_valid)
            {
                possible[count++] = nbr[j];
            }
        }
        printf("Possiveis maletas: ");
        for (int j = 0; j < count; j++) {
            if (j > 0) printf(", ");
            printf("%d", possible[j]);
        }
        printf(";\n");



        // // "Debugging"
        // for(int j = 0; j < 9; j++)
        // {
        //     printf("nbr[%d]: %d, and diff[%d]: %d\n", j, nbr[j], j, diff[j]);
        // }
        // for(int j = 0; j < 100; j++)
        // {
        //     printf("pos j: %d, value: %d --", j, freq[j]);
        // }
        // printf("\n");
        // printf("highestDiff: %d\n", highestDiff);

    }

    return 0;    
}
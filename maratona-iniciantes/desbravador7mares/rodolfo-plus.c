#include <stdio.h>
#include <string.h>

int main()
{
    char seqOrig[150];
    char seqNew[150];

    while(scanf("%s", seqOrig) != EOF)
    {
        // I wish I had thought of this way sooner
        int n = 0; // use this fucker to keep track of how long is the numbers-only string

        // let's try this to reset the numbers-only string
        memset(seqNew, '\0', sizeof(seqNew));

        // let's extract the fucking numbers from the fucking string
        for(int i = 0; seqOrig[i] != '\0'; i++)
        {
            if(seqOrig[i] >= '1' && seqOrig[i] <= '3')
            {
                seqNew[n++] = seqOrig[i];
            }
        }
        // test the fucking new fucking array
        // printf("%s, %d\n", seqNew, n); // it works

        // This sorts by nested looop, 
        // This outer loop to control the number of passes
        for(int i = 0; i < n - 1; i++)
        {
            // This Inside loop to compare and make the swap
            for(int j = 0; j < n - i - 1; j++)
            {
                // This conditional to compare number to the next and swap if necessary
                if(seqNew[j] > seqNew[j + 1])
                {
                    char temp = seqNew[j];
                    seqNew[j] = seqNew[j + 1];
                    seqNew[j + 1] = temp;
                }
            }
        }
        // test the fucking new fucking array fucking again
        // printf("%s, %d\n", seqNew, n); // it works


        // let's print between the numbers
        for(int i = 0; i < n; i++)
        {
            if(i > 0)
            { 
                printf("+");
            }
            printf("%c", seqNew[i]);
        }
        printf("\n");
    }

    return 0;
}
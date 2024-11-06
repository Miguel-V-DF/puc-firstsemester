#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, remainder;
    long int resultDecimal;
    char nbrO[100], text[10];
    
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        resultDecimal = 0;
        scanf("%99s %9s", nbrO, text);
        if(strcmp(text, "bin") == 0)
        {
            int length = strlen(nbrO);
            for(int j = 0; j < length; j++)
            {
                int bit = nbrO[j] - '0';
                resultDecimal = resultDecimal * 2 + bit;
            }
            printf("Case %d:\n", i);
            printf("%ld dec\n", resultDecimal);
            printf("%x hex\n", resultDecimal);
            printf("\n");
        }
        else
        {
            if(strcmp(text, "hex") == 0)
            {
                resultDecimal = strtol(nbrO, NULL, 16);
                printf("Case %d:\n", i);
                printf("%ld dec\n", resultDecimal);
                memset(nbrO, '\0', sizeof(nbrO)); 
                int j = 0;
                while(resultDecimal > 0)    
                {
                    remainder = resultDecimal % 2;
                    nbrO[j++] = remainder + '0';
                    resultDecimal = resultDecimal / 2;
                }
                nbrO[j] = '\0';

                for(int start = 0, end = j - 1; start < end; start++, end--)
                {
                    char temp = nbrO[start];
                    nbrO[start] = nbrO[end];
                    nbrO[end] = temp;
                }
                printf("%s bin\n", nbrO);
                printf("\n");
            }
            else
            {
                resultDecimal = strtol(nbrO, NULL, 10);
                printf("Case %d:\n", i);
                printf("%x hex\n", resultDecimal);
                memset(nbrO, '\0', sizeof(nbrO)); 
                int j = 0;
                while(resultDecimal > 0)    
                {
                    remainder = resultDecimal % 2;
                    nbrO[j++] = remainder + '0';
                    resultDecimal = resultDecimal / 2;
                }
                nbrO[j] = '\0';

                for(int start = 0, end = j - 1; start < end; start++, end--)
                {
                    char temp = nbrO[start];
                    nbrO[start] = nbrO[end];
                    nbrO[end] = temp;
                }
                printf("%s bin\n", nbrO);
                printf("\n");
            }

        }
    }
    return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
    char n[501], m[501];
    int verify = 1;
    
    scanf("%s %s", n, m);

    while(verify == 1)
    {
        int sumN = 0;
        for(int i = 0; n[i] != '\0'; i++)
        {
            sumN += n[i] - '0';
        }

        while(sumN > 9)
        {
            int sumTemp = 0;
            while(sumN > 0)
            {
                sumTemp += sumN % 10;
                sumN /= 10;
            }
            sumN = sumTemp;
        }

        int sumM = 0;
        for(int i = 0; m[i] != '\0'; i++)
        {
            sumM += m[i] - '0';
        }

        while(sumM > 9)
        {
            int sumTemp = 0;
            while(sumM > 0)
            {
                sumTemp += sumM % 10;
                sumM /= 10;
            }
            sumM = sumTemp;
        }

        if(sumN > sumM)
        {
            printf("1\n");
        }
        else
        {
            if(sumN < sumM)
            {
                printf("2\n");
            }
            else
            {
                printf("0\n");  
            }
        } 

        scanf("%s %s", n, m);

        if(strcmp(n, "0") == 0 && strcmp(m, "0") == 0)
        {
            verify = 0;
        }
    }
    return 0;
}
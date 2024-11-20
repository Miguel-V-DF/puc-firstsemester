#include <stdio.h>
#include <math.h>

int main()
{
    int n, x;

    scanf("%d", &n);

    for(int i = 0; i < n; i ++)
    {
        int notP = 0;
        scanf("%d", &x);
        if(x == 2 || x == 3)
        {
            printf("Prime\n");
        }
        else
        {
            if(x % 2 == 0)
            {
                printf("Not Prime\n");
            }
            else
            {
                for(int j = 3; j <= sqrt(x); j++)
                {
                    if(x % j == 0)
                    {
                        notP++;
                    }
                }
                if(notP > 0)
                {
                    printf("Not Prime\n");
                }
                else
                {
                    printf("Prime\n");
                }
            }
        }
    }

    return 0;
}

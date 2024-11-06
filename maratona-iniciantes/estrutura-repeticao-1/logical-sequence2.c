#include <stdio.h>

int main()
{
    int x, y, c = 1;

    scanf("%d %d", &x, &y);

    for(int i = 1; i <= y / x; i++)
    {
        for(int j = 1; j <= x; j++)
        {
            if(j < x)
            {
                printf("%d ", c);
            }
            else
            {
                printf("%d", c);                
            }
            c++;
        }
        printf("\n");
    }

    return 0;
}
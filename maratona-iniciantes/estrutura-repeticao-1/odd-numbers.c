#include <stdio.h>

int main()
{
    int i, x, p;

    scanf("%d", &x);
    p = x - (x - 1);

    for(int i = 0; i < x; i++)
    {
        if(p % 2 != 0)
        {
            printf("%d\n", p);
        }
        p++;
    }

    return 0;
}
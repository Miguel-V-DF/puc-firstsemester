#include <stdio.h>

int main()
{
    int a1, a2, a3, c1, c2, c3;

    scanf("%d%d%d", &a1, &a2, &a3);

    c1 = a2 * 2 + a3 * 4;
    c2 = a1 * 2 + a3 * 2;
    c3 = a1 * 4 + a2 * 2;

    if(c1 <= c2 && c1 <= c3)
    {
        printf("%d\n", c1);
    }
    else if (c2 <= c1 && c2 <= c3)
    {
        printf("%d\n", c2);
    }
    else 
    {
        printf("%d\n", c3);
    }

    return 0;
}

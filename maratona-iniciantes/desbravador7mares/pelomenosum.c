#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);

    if(y > x)
    {
        printf("%d\n", y - x);
    }

    return 0;
}
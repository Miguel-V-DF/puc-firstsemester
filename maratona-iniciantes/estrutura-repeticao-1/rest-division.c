#include <stdio.h>

int main()
{
    int x, y, temp;

    scanf("%d%d", &x, &y);
    
    if(y > x)
    {
        temp = y;
        y = x;
        x = temp;
    }

    for(int i = y + 1; i < x; i++)
    {
        if(i % 5 == 2 || i % 5 == 3)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
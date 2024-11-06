#include <stdio.h>

int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    if(z > x)
    {
        z = x + z;
        x = z - x;
        z = z - x;
    }
    if(y > x)
    {
        y = x + y;
        x = y - x;
        y = y - x;
    }

    if(x * x == y * y + z * z)
    {
        for(int i = 1; i <= z;i++)
        {
        }
        if(mdc(x,y,z) == 1)
        {
            printf("tripla pitagorica primitiva\n");
        }
        else
        {
            printf("tripla pitagorica\n");
        }
    }
    else
    {
        printf("tripla\n");
    }

    return 0;
}

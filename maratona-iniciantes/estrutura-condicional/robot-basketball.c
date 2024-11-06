#include <stdio.h>

int main()
{
    int d, v;
    
    scanf("%d", &d);

    if(d <= 800)
    {
        v = 1;
    }
    else if(d > 800 && d <= 1400)
    {
        v = 2;
    }
    else if (d > 1400 && d <= 2000)
    {
        v = 3;
    }

    printf("%d\n", v);

    return 0;
}
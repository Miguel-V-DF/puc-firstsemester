#include <stdio.h>

int main()
{
    int n, high = 0, pos = 0;

    for(int i = 1; i <= 100; i++)
    {
        scanf("%d", &n);
        if(n > high)
        {
            high = n;
            pos = i;
        }
    }
    printf("%d\n%d\n", high, pos);

    return 0;
}
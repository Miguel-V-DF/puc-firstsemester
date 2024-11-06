#include <stdio.h>

int main()
{
    int n, x;
    
    scanf("%d", &n);
    x = n - (n - 1);

    for(int i = 0; i < n; i++)
    {
        if(x % 2 == 0)
        {
            printf("%d^2 = %d\n", x, x * x);
        }
        x++;
    }

    return 0;
}
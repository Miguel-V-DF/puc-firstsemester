#include <stdio.h>

int main()
{
    int n, fib1 = 0, fib2 = 1, temp = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("%d", fib1);
        if(i < n-1)
        {
            printf(" ");
        }
        temp = fib2;
        fib2 = fib1;
        fib1 += temp;
    }
    printf("\n");

    return 0;
}
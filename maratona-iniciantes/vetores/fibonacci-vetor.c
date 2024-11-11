#include <stdio.h>

int main()
{
    unsigned long int fib[61] ={0, 1};
    int n, x;
    for(int i = 2; i < 61; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &x);
        printf("Fib(%d) = %lu\n", x, fib[x]);
    }


    return 0;
}

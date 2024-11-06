#include <stdio.h>

int main()
{
    double n, r = 0.0;

    scanf("%lf", &n);

    while (n-- > 0)
    {
        r = 1.0 / (6.0 + r);
    }
    
    r += 3.0;

    printf("%.10lf\n", r);

    return 0;
}
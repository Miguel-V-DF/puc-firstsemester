#include <stdio.h>

int main()
{
    double v, d, r, h, a;

    while(scanf("%lf %lf", &v, &d) != EOF)
    {
        h = v / ((d / 2) * (d / 2) * 3.14);
        a = (d / 2) * (d / 2) * 3.14;
        printf("ALTURA = %.2lf\n", h);
        printf("AREA = %.2lf\n", a);
    }
    return 0;
}
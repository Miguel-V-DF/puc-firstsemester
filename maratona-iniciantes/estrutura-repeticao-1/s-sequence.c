#include <stdio.h>

int main()
{
    double s = 0;

    for(int i = 1.0; i <= 100.0; i++)
    {
        s = s + (1.0/i);
    }

    printf("%.2lf\n", s);

    return 0;
}
#include <stdio.h>

int main()
{
    int n, t, year;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &t);
        if(t <= 2014)
        {
            year = 2015 - t;
            printf("%d D.C.\n", year);
        }
        else
        {
            year = t - 2014;
            printf("%d A.C.\n", year);
        }
    }
    return 0;
}
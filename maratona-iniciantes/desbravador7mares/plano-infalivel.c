#include <stdio.h>

int main()
{
    int a, b;
    long long int f0, f1, fn, an, bn, result;

    while(scanf("%d %d", &a, &b) != EOF)
    {
        f0 = 0;
        f1 = 1;
        int x;
        if(a >= b)
        {
            x = a;
        }
        else
        {
            x = b;
        }
        
        for(int i = 0; i <= x; i++)
        {
            fn = f0;
            f0 = f1;
            f1 += fn; 
            if(i == a)
            {
                an = fn;
            }
            if(i == b)
            {
                bn = fn;
            }
        }
        result = an + bn;
        printf("%lld\n", result);
    }

    return 0;
}
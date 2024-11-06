#include <stdio.h>

int main()
{
    int i, x, even = 0, odd = 0, pos = 0, neg = 0;

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &x);
        if(x > 0)
        {
            pos++;
        }
        else if(x < 0)
        {
            neg++;
        }
        if(x % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);

    return 0;
}
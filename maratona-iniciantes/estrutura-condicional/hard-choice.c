#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ca, cr, ba, br, pa, pr, meals = 0;

    scanf("%d %d %d", &ca, &ba, &pa);
    scanf("%d %d %d", &cr, &br, &pr);

    if (cr > ca)
    {
        meals = meals + abs(cr - ca);
    }
    if (br > ba)
    {
        meals = meals + abs(br - ba);
    }
    if (pr > pa)
    {
        meals = meals + abs(pr - pa);
    }

    printf("%d\n", meals);

    return 0;
}
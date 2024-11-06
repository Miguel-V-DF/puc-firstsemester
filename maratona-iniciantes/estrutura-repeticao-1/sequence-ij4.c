#include <stdio.h>

int main()
{
    for(float i = 0; i <= 2.0  + 0.001; i += 0.2)
    {
        for(float j = i + 1.0; j < i + 3.0  + 0.001; j += 1.0)
        {
            if((i > 0 && i < 1) || (i > 1 && i < 2))
            {
                printf("I=%.1f J=%.1f\n", i, j);
            }
            else
            {
                printf("I=%d J=%d\n", (int)i, (int)j);
            }
        }
    }

    return 0;
}
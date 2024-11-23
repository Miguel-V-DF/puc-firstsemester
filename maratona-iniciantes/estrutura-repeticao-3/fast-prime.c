#include <stdio.h>
#include <math.h>

int main()
{
    int n, x;

    scanf("%d", &n);

    for(int i = 0; i < n; i ++)
    {
        scanf("%d", &x);
        if(x == 2)
        {
            printf("Prime\n");
        }
        else
        {
            int rad = sqrt(x);
            int j = 2;
            while(j <= rad && x % j != 0) {
                j++;
            }
            if(j > rad) {
                printf("Prime\n");
            }
            else {
                printf("Not Prime\n");
            }
        }
    }

    return 0;
}

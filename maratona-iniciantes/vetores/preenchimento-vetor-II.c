#include <stdio.h>

int main()
{
    int n[1000], t, x;
    scanf("%d", &t);
    x = 0;
    for(int i = 0; i < 1000; i++) {
        if(x < t - 1) {
            n[i] = x;
            x++;
        }
        else {
            n[i] = x;
            x = 0;
        }
    }
    for(int i = 0; i < 1000; i++) {
        printf("N[%d] = %d\n", i, n[i]);
    }
    return 0;
}

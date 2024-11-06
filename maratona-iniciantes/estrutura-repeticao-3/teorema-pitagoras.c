#include <stdio.h>

int main()
{
    int x, y, z, gcd;
    while(scanf("%d %d %d", &x, &y, &z) != EOF) {
        gcd = 1;
        if(z > x) {
            z = x + z;
            x = z - x;
            z = z - x;
        }
        if(y > x) {
            y = x + y;
            x = y - x;
            y = y - x;
        }
        if(z > y) {
            z = y + z;
            y = z - y;
            z = z - y;
        }
        if(x * x == y * y + z * z) {
            for(int i = 2;i <= z; i++) {
                if(x % i == 0 && y % i == 0 && z % i == 0) {
                    gcd = i;
                }
            }
            if(gcd == 1) {
                printf("tripla pitagorica primitiva\n");
            }
            else {
                printf("tripla pitagorica\n");
            }
        }
        else {
            printf("tripla\n");
        }
    }
    return 0;
}

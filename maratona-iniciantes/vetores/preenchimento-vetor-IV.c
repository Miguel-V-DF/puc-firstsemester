#include <stdio.h>

int main()
{
    int x, par[5], impar[5], posI = 0, posP = 0;
    for(int i = 0; i < 15; i++) {
        scanf("%d", &x);
        if(x % 2 != 0) {
            impar[posI] = x;
            posI++;
            if(posI == 5) {
                for(int j = 0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, impar[j]);
                    impar[j] = 0;
                }
                posI = 0;
            }
        }
        else {
            par[posP] = x;
            posP++;
            if(posP == 5) {
                for(int j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, par[j]);
                    par[j] = 0;
                }
                posP = 0;
            }
        }
    }
    for(int i = 0; i < posI; i++) {
        printf("impar[%d] = %d\n", i, impar[i]);
    }
    for(int i = 0; i < posP; i++) {
        printf("par[%d] = %d\n", i, par[i]);
    }
    return 0;
}

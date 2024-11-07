#include <stdio.h>

int main()
{
    int n[20];
    for(int i = 0; i < 20; i++) {
        scanf("%d", &n[i]);
    }
    for(int i = 0, j = 19; i <= 9 && j >= 10;i++, j--) {
        int aux = n[i];
        n[i] = n[j];
        n[j] = aux;
    }
    for(int i = 0; i < 20; i++) {
            printf("N[%d] = %d\n", i, n[i]);
    }
    return 0;
}

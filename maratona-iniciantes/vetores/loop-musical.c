#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    while(n != 0) {
        int wave[10000], picos = 0;
        for(int i = 0; i < n; i++) {
            scanf("%d", &wave[i]);
        }
        if((wave[0] > wave[n-1] && wave[0] > wave[1]) || (wave[0] < wave[n-1] && wave[0] < wave[1])) {
            picos++;
        }
        if((wave[n-1] > wave[0] && wave[n-1] > wave[n-2]) || (wave[n-1] < wave[0] && wave[n-1] < wave[n-2])) {
            picos++;
        }
        for(int i = 1; i < n - 1; i++) {
            if((wave[i] > wave[i-1] && wave[i] > wave[i+1]) || (wave[i] < wave[i-1] && wave[i] < wave[i+1])) {
               picos++;
            }
        }
        printf("%d\n", picos);
        scanf("%d", &n);
    }
    return 0;
}

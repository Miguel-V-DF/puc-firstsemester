#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    while(n) {
        int m[n][n];
        int max = 1 << ( 2 * (n - 1));
        int t = (int)log10(max) + 1;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                m[i][j] = 1 << (i+j);
            }
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                printf("%*d", t, m[i][j]);
                if(j < n-1) {
                    printf(" ");
                }
                else {
                    printf("\n");
                }
            }
        }
        printf("\n");
        scanf("%d", &n);
    }
    return 0;
}

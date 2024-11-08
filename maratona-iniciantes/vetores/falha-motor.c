#include <stdio.h>

int main ()
{
    int n;
    scanf("%d", &n);
    int r[n], previous, problemN;
    scanf("%d", &r[0]);
    previous = r[0];
    problemN = 0;
    for(int i = 1; i < n; i++) {
        scanf("%d", &r[i]);
        if(r[i] < previous && problemN == 0) {
            problemN = i + 1;
        }
        previous = r[i];
    }
    printf("%d\n", problemN);
    return 0;
}

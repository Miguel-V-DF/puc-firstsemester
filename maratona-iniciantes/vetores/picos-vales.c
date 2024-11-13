#include <stdio.h>

int main()
{
    int n, valid = 1;
    char value = '\0';
    scanf("%d", &n);
    int h[n];
    scanf("%d", &h[0]);
    if(n == 1) {
        valid = 0;
    }
    for(int i = 1; i < n; i++) {
        scanf("%d", &h[i]);
        if(i == 1) {
            if(h[1] < h[0]) {
                value = 'D';
            }
            else {
                if(h[1] > h[0]) {
                    value = 'U';
                }
            }
        }
        else {
            if((value == 'D') && ((i % 2 == 0 && h[i] < h[i-1]) || (i % 2 != 0 && h[i] > h[i-1]))) {
                valid = 0;
            }
            else {
                if((value == 'U') && ((i % 2 == 0 && h[i] > h[i-1]) || (i % 2 != 0 && h[i] < h[i-1]))) {
                    valid = 0;
                }
            }
        }
    }
    printf("%d\n", valid);
    return 0;
}

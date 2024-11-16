#include <stdio.h>

int main()
{
    int n, valid = 1;
    scanf("%d", &n);
    int h[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &h[i]);
    }

    for(int i = 1; i < n; i++) {
        if(h[i] == h[i - 1]) {
            valid = 0;
        }
        else {
            if(i > 1) {
                if(!((h[i - 1] > h[i - 2] && h[i] < h[i - 1]) || 
                      (h[i - 1] < h[i - 2] && h[i] > h[i - 1]))) {
                    valid = 0;
                }
            }
        }
    }

    printf("%d\n", valid);
    return 0;
}

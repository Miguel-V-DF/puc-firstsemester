#include <stdio.h>

int main()
{
    int n;
    while(scanf("%d", &n) !=EOF) {
        int m[n][n];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(n % 2 == 0) {
                    if(i == j) {
                        m[i][j] = 1;
                    }
                    else {
                        if(i+j+1 == n) {
                            m[i][j] = 2;
                        }
                        else {
                            m[i][j]= 3;
                        }
                    }
                }
                else {
                    if(i+j+1 == n) {
                        m[i][j] = 2;
                    }
                    else {
                        if(i == j) {
                            m[i][j] = 1;
                        }
                        else {
                            m[i][j] = 3;
                        }
                    }
                }
            }
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                printf("%d", m[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}


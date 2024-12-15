#include <stdio.h>

int main()
{
    int n;
    while(scanf("%d", &n) !=EOF) {
        int m[n][n];
        int third = n / 3;
        int half = n / 2;
        int diagL = n - 1;
        int diff = diagL - third;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(i == half && j == half) {
                    m[i][j] = 4;
                }
                else {
                    if(((i >= third) && (j >= third)) && ((i <= diff) && (j <= diff))) {
                        m[i][j] = 1;
                    }
                    else {
                        if(i == j) {
                            m[i][j] = 2;
                        }
                        else {
                            if(i + j == diagL) {
                                m[i][j] = 3;
                            }
                            else {
                                m[i][j] = 0;
                            }
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
        printf("\n");
    }
    return 0;
}

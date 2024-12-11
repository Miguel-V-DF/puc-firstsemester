#include <stdio.h>

int main()
{
    double m[12][12], s = 0;
    int l;
    char t;
    scanf("%d %c", &l, &t);
    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            scanf("%lf", &m[i][j]);
        }   
    }   
    for(int j = l; j < l+1; j++) {
        for(int i = 0; i < 12; i++) {
            s = s + m[i][j];
        }   
    }   
    if(t == 'S') {
        printf("%.1lf\n", s); 
    }   
    else {
        printf("%.1lf\n", s/12);
    }   

    return 0;
}


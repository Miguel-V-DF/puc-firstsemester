#include <stdio.h>

int main()
{
    double m[12][12], s = 0;
    char t;
    scanf("%c", &t);
    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            scanf("%lf", &m[i][j]);
        }   
    }   
    for(int i = 0; i < 11; i++) {
        for(int j = 0; j < 11 - i; j++) {
            s = s + m[i][j];
        }   
    }   
    if(t == 'S') {
        printf("%.1lf\n", s); 
    }   
    else {
        printf("%.1lf\n", s/66);
    }   

    return 0;
}

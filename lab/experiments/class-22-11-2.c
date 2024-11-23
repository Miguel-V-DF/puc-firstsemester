#include <stdio.h>

int main()
{
    char m1[10][10]; 
    char m2[10][10];
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            m1[i][j] = '-';
            m2[i][j] = '*';
        }
    }
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            printf("%c\t", m1[i][j]);
        }
        for(int j = 0; j < 10; j++) {
            printf("%c\t", m2[i][j]);
        }
        printf("\n");
    }

    return 0;
}

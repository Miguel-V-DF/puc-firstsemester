#include <stdio.h>

int main()
{
    int m1[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d\t", m1[j][i]);
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int input, vector[10];
    scanf("%d", &input);
    for(int i = 0; i < 10; i++) {
        vector[i] = input;
        input = input * 2;
    }
    for(int i = 0; i < 10; i++) {
        printf("N[%d] = %d\n", i, vector[i]);
    }
}

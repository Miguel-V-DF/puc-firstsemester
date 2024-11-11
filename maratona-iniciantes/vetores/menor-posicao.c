#include <stdio.h>

int main()
{
    int n, smaller = 9999, position;
    scanf("%d", &n);
    int x[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
        if(x[i] < smaller) {
            smaller = x[i];
            position = i;
        }
    }
    printf("Menor valor: %d\n", smaller);
    printf("Posicao: %d\n", position);
    return 0;
}

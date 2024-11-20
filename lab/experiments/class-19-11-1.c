#include <stdio.h>

int main()
{
    int v[5], maior, pos;
    for(int i = 0; i < 5; i++) {
        scanf("%d", &v[i]);
        if(i == 0) {
            maior = v[i];
        }
        if(v[i]> maior) {
            maior = v[i];
            pos = i;
        }
    }
    printf("O maior número é %d e sua posição é %d\n", maior, pos);



    return 0;
}

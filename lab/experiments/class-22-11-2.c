#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    char m1[10][10]; 
    char m2[10][10]; 
    int linha, coluna;
    srand(time(NULL));
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            m1[i][j] = '-';
            m2[i][j] = '-';
        }
    }

    for(int i = 0; i < 5; i++) {
        linha = rand()%10;
        coluna = rand()%10;
        m2[linha][coluna] = 'S';
    }
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            printf("%c ", m2[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < 15; i++) {
        printf("Escolha um local: \n");
        scanf("%d %d", &linha, &coluna);
        if(m2[linha][coluna] == 'S') {
            printf("Submarino!\n");
        }
        else {
            printf("Água!\n");
        }
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int valid = 0, random[3];
    srand(time(NULL));
    for(int i = 0; i < 3; i++) {
        do {
            random[i] = rand() % 10;
        }
        while(random[i] == 0);
        // printf("Random[%d] = %d\n", i, random[i]);
    }
    while(valid == 0) {
        int place[3] = {0, 0, 0};
        int answer[3] = {0, 0, 0};
        printf("Digite 3 números de 1 a 9:\n");
        for(int i = 0; i < 3; i++) {
            scanf("%d", &answer[i]);
            while(answer[i] < 1 || answer[i] > 9) {
                printf("Número inválido, deve estar entre 1 e 9. \n");
                scanf("%d", &answer[i]);
            }
        }
        for(int i = 0; i < 3; i++) { 
            if(answer[i] % random[i] == 0) {
                place[i] = 1;
                printf("Número da posição %d é múltiplo do número chave correspondente.\n", i + 1);
            }
            else {
                printf("Número da posição %d não é múltiplo do número chave correspondente.\n", i + 1);
            }
        }
        if(place[0] + place[1] + place[2] == 3) {
            valid = 1;
            printf("Parabéns! Todos os números são múltiplos dos números chave.\n");
        }
        else { 
            printf("Tente novamente!\n");
        }
    }
    return 0;
}


#include <stdio.h>

int main()
{
    int n, choice[5], answer, valid;
    scanf("%d", &n);
    while(n != 0) {
        for(int i = 0; i < n; i++) {
            valid = 0;
            for(int j = 0; j < 5; j++) {
                scanf("%d", &choice[j]);
                if(choice[j] <= 127) {
                    valid++;
                    answer = j + 65;
                }
            }
            if(valid == 1) {
                printf("%c\n", answer);
            }
            else {
                printf("*\n");
            }
        }
        scanf("%d", &n);
    }

    return 0;
}

#include <stdio.h>

int main()
{
    char alphabet[27];
    while(scanf(" %s", alphabet) != EOF) {
        int n;
        scanf("%d", &n);
        char message[10000];
        for(int i = 0; i < n; i++) {
            int letter;
            scanf("%d", &letter);
            message[i] = alphabet[letter-1];
        }
        message[n] = '\0';
        printf("%s\n", message);
    }
    return 0;
}

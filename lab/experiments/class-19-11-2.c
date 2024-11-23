#include <stdio.h>

int main()
{
    char palavra[100];
    int length = 0, i = 0, valid = 1;

    scanf("%s", palavra);
    
    while(palavra[i] != '\0') {
        length++;
        i++;
    }
    printf("length: %d\n", length);
    int half = length / 2;
    printf("half: %d\n", half);
    for(int j = 0; j < half; j++) {
        if(palavra[j] != palavra[length - j - 1]) {
            valid = 0;
        }
    }
    if(valid == 0) {
        printf("The word is not a palindrome\n");
    }
    else {
        printf("The word is a palindrome\n");
    }

    return 0;

}

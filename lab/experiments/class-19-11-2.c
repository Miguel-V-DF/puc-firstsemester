#include <stdio.h>

int main()
{
    char palavra[10], length = 0, i = 0, valid = 1;
    
    scanf("%s", palavra);
    
    while(palavra[i] != '\0') {
        length++;
        i++;
    }
    printf("length: %d", length);
    for(int j = 0; j < length / 2; j++) {
        if((palavra[j] == palavra[length - j])) {
            valid == 0;
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

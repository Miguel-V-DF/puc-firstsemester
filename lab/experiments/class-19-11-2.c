#include <stdio.h>

int main()
{
    char palavra[1001];
    int length = 0, i = 0;
    scanf("%s", palavra);
    while(palavra[i] != '\0') {
        length++;
        i++;
    }
    int half = length / 2;
    i = 0;
    while((i < half) && (palavra[i] == palavra[length-1-i])) i++;
    if(i == half) printf("The word is palindrome\n");
    else printf("The word isn't palindrome\n");
    return 0;
}

#include <stdio.h>

int main()
{
    char x, lastPrinted = '\0';
    while(scanf("%c", &x) != EOF) {
        if(x == 'j' || x == 'p' || x == 's' || x == 'v' || x == 'b' || x == 'x' || x == 'z') {
            x = 'f';
        }
        else {
            if(x == 'J' || x == 'P' || x == 'S' || x == 'V' || x == 'B' || x == 'X' || x == 'Z') {
                x = 'F';
            }
        }
        if(x == 'f' || x == 'F') {
            if(lastPrinted != 'f' && lastPrinted != 'F') {
                lastPrinted = x;
                printf("%c", x);
            }
        } 
        else {
            printf("%c", x);
            lastPrinted = x;
        }
    }
    return 0;
}

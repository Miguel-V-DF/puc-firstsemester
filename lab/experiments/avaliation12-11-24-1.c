#include <stdio.h>

int main()
{

    for(int count = 0; count < 10; count++) {
        if((count%3)==0) {
            printf("1");
        }
        else {
            printf("0");
        }
    }
    return 0;
}

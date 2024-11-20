#include <stdio.h>

int main()
{
    int i = -2, a = 0;

    for(;i!= 10; i+=2) {
        a = a+1;
        printf("a = %d", i);
    }


    return 0;
}

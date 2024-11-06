#include <stdio.h>

int main()
{
    int n, previous, solution, valid;
    valid = 1;
    scanf("%d", &previous);
    solution = previous + 1;
    while(scanf("%d",&n) != EOF) {
        if(valid == 1) {
            if(n > previous) {
                solution = n + 1;
                previous = n;
            }
            else {
                valid = 0;
                solution = previous + 1;
            }
        }
    }
    printf("%d\n", solution);
    return 0;
}

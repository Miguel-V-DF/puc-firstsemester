#include <stdio.h>

int main()
{
    int n = 1, sum = 0, counter = 0;
    float average = 0;

    while(n > 0)
    {
        scanf("%d", &n);
        if(n > 0)
        {
            sum = sum + n;
        counter++;
        }
    }
    average = (float)sum / counter;
    printf("%.2f\n", average);

    return 0;
}
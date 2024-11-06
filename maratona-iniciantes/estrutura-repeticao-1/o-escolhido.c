#include <stdio.h>

int main()
{
    int n, chosen = 0;
    float high = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        int mat;
        float grade;
        scanf("%d %f", &mat, &grade);
        if(grade >= 8.0 && grade > high)
        {
            chosen = mat;
            high = grade;
        }
    }
    if(high < 8.0)
    {
        printf("Minimum note not reached\n");
    }
    else
    {
        printf("%d\n", chosen);
    }

    return 0;
}
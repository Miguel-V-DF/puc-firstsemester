#include <stdio.h>

int main()
{
    double grade, sum;
    int x = 1;

    while(x == 1)
    {
        sum = 0.0;
        for(int i = 0; i < 2; i++)
        {
            grade = 11;
            while(grade > 10.0 || grade < 0.0)
            {
                scanf("%lf", &grade);
                if(grade > 10.0 || grade < 0.0)
                {
                    printf("nota invalida\n");
                }
            }
            sum += grade;
        }
        printf("media = %.2lf\n", sum / 2.0);
        x = 3;
        while(x != 1 && x != 2)
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &x);
        }
    }

    return 0;
}
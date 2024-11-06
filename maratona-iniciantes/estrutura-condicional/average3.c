#include <stdio.h>

int main()
{
    float n1, n2, n3, n4, average, n5;

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    average = (n1 * 0.2) + (n2 * 0.3) + (n3 * 0.4) + (n4 * 0.1); 

    printf("Media: %.1f\n", average);

    if (average >= 7)
    {
        printf("Aluno aprovado.\n");
    }
    else if (average < 5)
    {
        printf("Aluno reprovado.\n");
    }
    else
    {
        printf("Aluno em exame.\n");
        scanf("%f", &n5);
        printf("Nota do exame: %.1f\n", n5);
        average = (average + n5) / 2;
        if (average >= 5)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", average);
    }

    return 0;
}
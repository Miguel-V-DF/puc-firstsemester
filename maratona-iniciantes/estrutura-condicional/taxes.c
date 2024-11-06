#include <stdio.h>

int main()
{
    float sal;

    scanf("%f", &sal);

    if (sal <= 2000)
    {
        printf("Isento\n");
    }
    else if (sal > 2000 && sal <= 3000)
    {
        printf("R$ %.2f\n", (sal - 2000) * 0.08);
    }
    else if (sal > 3000 && sal <= 4500)
    {
        printf("R$ %.2f\n", (sal - 3000) * 0.18 + 1000.00 * 0.08);
    }
    else
    {
        printf("R$ %.2f\n", (sal - 4500) * 0.28 + 1500.00 * 0.18 + 1000.00 * 0.08);
    }

    return 0;
}
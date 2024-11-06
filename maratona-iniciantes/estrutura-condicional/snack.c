#include <stdio.h>

int main()
{
    int x, y;
    float price;

    scanf("%d %d", &x, &y);

    switch (x)
    {
        case 1 :
            price = y * 4.0;
            printf ("Total: R$ %.2f\n", price);
            break;
        case 2 :
            price = y * 4.5;
            printf ("Total: R$ %.2f\n", price);
            break;
        case 3 :
            price = y * 5.0;
            printf ("Total: R$ %.2f\n", price);
            break;
        case 4 :
            price = y * 2.0;
            printf ("Total: R$ %.2f\n", price);
            break;
        case 5 :
            price = y * 1.5;
            printf ("Total: R$ %.2f\n", price);
            break;
        default :
            printf("Código inválido\n");
    }

    return 0;
}
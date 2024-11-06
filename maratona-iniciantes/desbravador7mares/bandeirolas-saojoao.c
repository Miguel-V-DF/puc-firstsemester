#include <stdio.h>

int main()
{
    int n, x, remainder, seq1, seqBig;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        seq1 = 0;
        seqBig= 0;
        while(x > 0)
        {
            remainder = x%2;
            if(remainder == 1)
            {
                seq1++;
                if(seq1 > seqBig)
                {
                    seqBig = seq1;
                }
            }
            else
            {
                seq1 = 0;
            }
            x = x / 2;
        }
        printf("%d\n", seqBig);
    }

    return 0;
}
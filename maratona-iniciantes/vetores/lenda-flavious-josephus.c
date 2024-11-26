#include <stdio.h>

int main()
{
    int nC;
    scanf("%d", &nC);
    for(int i = 0; i < nC; i++) {
        int n, k;
        scanf("%d %d", &n, &k);
        int pos = 0;
        for(int size = 2; size <= n; size++) {
            pos = (pos + k) % size;
        }
        printf("Case %d: %d\n",i+1, pos+1);
    }

    return 0;
}

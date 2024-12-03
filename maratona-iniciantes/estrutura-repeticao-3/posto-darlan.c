#include <stdio.h>

int main()
{
    int n, m, qdtM = 0, qdtC = 0;
    scanf("%d %d", &n, &m);
    char l[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%c", &l[i][j]);
        }
    }

    return 0;
}

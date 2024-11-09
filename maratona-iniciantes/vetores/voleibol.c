#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int s[2], b[2], a[2];
    int sT[2] = {0, 0}, bT[2] = {0, 0}, aT[2] = {0, 0};
    char nome[40];

    for(int i = 0; i < n; i++) {
        scanf(" %[^\n]", nome);
        scanf("%d %d %d", &s[0], &b[0], &a[0]);
        sT[0] += s[0];
        bT[0] += b[0];
        aT[0] += a[0];
        scanf("%d %d %d", &s[1], &b[1], &a[1]);
        sT[1] += s[1];
        bT[1] += b[1];
        aT[1] += a[1];
    }
    printf("Pontos de Saque: %.2lf %%.\n", (double)sT[1]/sT[0]*100.0);
    printf("Pontos de Bloqueio: %.2lf %%.\n", (double)bT[1]/bT[0]*100.0);
    printf("Pontos de Ataque: %.2lf %%.\n", (double)aT[1]/aT[0]*100.0);
    
    return 0;
}

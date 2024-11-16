#include <stdio.h>

int main()
{
    char input[15];
    while(scanf("%s", input) !=EOF) {
        int cpf[11], aux = 0;
        for(int i = 0; i < 14; i++) {
            if(input[i] >= '0' && input[i] <= '9') {
                cpf[aux] = input[i] - '0';
                aux++;
            }
        }
        int v[2] = {0, 0};        
        for(int i = 0; i < 9; i++) {
            v[0] = v[0] + cpf[i] * (i+1);
            v[1] = v[1] + cpf[i] * (9 - i);
        }
        for(int i = 0; i < 2; i++) {
            v[i] = v[i] % 11;
            v[i] = (v[i] == 10) ? 0 : v[i];
        }
        printf((v[0] == cpf[9] && v[1] == cpf[10]) ? "CPF valido\n" : "CPF invalido\n");


    }
    return 0;
}

#include <stdio.h>

int main()
{
    int c, x, y, vetor[5]={5,4,3,2,8};
    for(x=1;x<5;x++) {
        c=vetor[x];
        y=x-1;
        while(y>0 && vetor[y]>c){
            vetor[y+1]=vetor[y];
            y=y-1;
        }
        vetor[y+1]=c;
    }
    for(int i = 0; i < 5; i++) {
        printf("%d\n", vetor[i]);
    }
    return 0;
}

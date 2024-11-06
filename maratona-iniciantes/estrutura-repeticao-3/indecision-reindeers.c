#include <stdio.h>

int main()
{
    const char* NAMES[9] = {"Dasher", "Dancer", "Prancer", "Vixen", "Comet", "Cupid", "Donner", "Blitzen", "Rudolph"};
    int deer[9], snowballs = 0, winner;
    
    for(int i = 0; i < 9; i++)
    {
        scanf("%d", &deer[i]);            
        snowballs += deer[i];
    }

    winner = (snowballs - 1) % 9;
    printf("%s\n", NAMES[winner]);

    return 0;
}
#include <stdio.h>

int main()
{
    int day1, hours1, minutes1, seconds1, day2, hours2, minutes2, seconds2;

    scanf("Dia %d",&day1);
    scanf("%d : %d : %d\n", &hours1, &minutes1, &seconds1);
    scanf("Dia %d",&day2);
    scanf("%d : %d : %d\n", &hours2, &minutes2, &seconds2);

    seconds1 = seconds2 - seconds1;
    minutes1 = minutes2 - minutes1;
    hours1 = hours2 - hours1;
    day1 = day2 - day1;

    if(seconds1 < 0)
    {
        seconds1 += 60;
        minutes1--;
    } 

    if(minutes1 < 0)
    {
        minutes1 += 60;
        hours1--;
    }

    if(hours1 < 0)
    {
        hours1 += 24;
        day1--;
    }

    printf("%d dia(s)\n", day1);
    printf("%d hora(s)\n", hours1);
    printf("%d minuto(s)\n", minutes1);
    printf("%d segundo(s)\n", seconds1);

    return 0;
}
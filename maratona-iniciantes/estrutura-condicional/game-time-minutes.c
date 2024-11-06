#include <stdio.h>

int main()
{
    int startHour, startMinute, endHour, endMinute, startTime, endTime, totalTime;

    scanf("%d %d %d %d", &startHour, &startMinute, &endHour, &endMinute);

    startTime = startHour * 60 + startMinute;
    endTime = endHour * 60 + endMinute;
    totalTime = endTime - startTime;

    if (startHour == endHour && startMinute == endMinute)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else if (totalTime < 0)
    {
        totalTime = totalTime + 1440;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", totalTime / 60, totalTime % 60);
    }
    else
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", totalTime / 60, totalTime % 60);
    }

    return 0;
}
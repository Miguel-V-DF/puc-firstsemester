#include <stdio.h>
#include <string.h>

int main()
{
    char date[10], day[3], month[3], year[3];

    scanf("%s", date);

    strncpy(day, date, 2);
    day[2] = '\0';
    strncpy(month, date + 3, 2);
    month[2] = '\0';
    strncpy(year, date + 6, 2);
    year[2] = '\0';

    printf("%s/%s/%s\n", month, day, year);
    printf("%s/%s/%s\n", year, month, day);
    printf("%s-%s-%s\n", day, month, year);

    return 0;
}
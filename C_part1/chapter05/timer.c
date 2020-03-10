#include <stdio.h>
#include <time.h>

int main ()
{
    time_t currentTimeValue = 0;
    struct tm *timeStructPointer = NULL;

    currentTimeValue = time(NULL);

    timeStructPointer = localtime(&currentTimeValue);

    printf("year %d\n", timeStructPointer->tm_year + 1900);
    printf("month %d\n", timeStructPointer->tm_mon + 1);
    printf("day %d\n", timeStructPointer->tm_mday);
    printf("hour %d\n", timeStructPointer->tm_hour);
    printf("minute %d\n", timeStructPointer->tm_min);
    printf("second %d\n", timeStructPointer->tm_sec);


    return 0;
}
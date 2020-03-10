#include <stdio.h>
#include <time.h>

int main ()
{
    time_t currentTimeInfo = 0;
    struct tm *TimePointer = NULL;

    currentTimeInfo = time(NULL);

    TimePointer = localtime(&currentTimeInfo);

    printf("year %d\n", TimePointer->tm_year + 1900);
    printf("month %d\n", TimePointer->tm_mon + 1);
    printf("day %d\n", TimePointer->tm_mday);
    printf("hour %d\n", TimePointer->tm_hour);
    printf("minute %d\n", TimePointer->tm_min);
    printf("second %d\n", TimePointer->tm_sec);

    return 0;
}




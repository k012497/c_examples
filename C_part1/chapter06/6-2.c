#include <stdio.h>
#include <limits.h>

int main()
{
    printf("char의 최솟값 %d, 최댓값 %d \n", CHAR_MIN, CHAR_MAX);
    printf("short의 최솟값 %d, 최댓값 %d \n", SHRT_MIN, SHRT_MAX);
    printf("int의 최솟값 %d, 최댓값 %d \n", INT_MIN, INT_MAX);
    printf("long의 최솟값 %d, 최댓값 %d \n", LONG_MIN, LONG_MAX);

    return 0;
}

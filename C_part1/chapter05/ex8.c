#include <stdio.h>

int main()
{
    int hour = 0, min = 0, sec = 0;
    int total_sec = 0;

    printf("현재 시간 입력 : ");
    scanf("%d시 %d분 %d초", &hour, &min, &sec);
    
    total_sec = (hour * 60 * 60) + (min * 60 ) + sec;
    printf("00시 00분 00초를 기준으로 %d초가 흘렀습니다.\n", total_sec);

    return 0;

}
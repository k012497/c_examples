/*
파일명 : cal2.c
만든이 : 김소진 
출력프로그램
입력 : 없음(viod)
출력 : 리턴값(0)
*/

#include <stdio.h>

int main () 
{
    printf("10진수 정수: %d\n", (int)0.5);
    printf("10진수 실수: %f\n", 0.5);
    printf("10진수 실수: %lf\n", 0.5);
    printf("소수점 이하 6자리 이상: %f\n", 0.5655678);
    printf("소수점 이하 6자리 이상: %lf\n", 0.5667784);

    return 0;
}
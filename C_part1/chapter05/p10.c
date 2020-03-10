#include <stdio.h>

int main ()
{
    float x, y = 0.0f;
    
    printf("x, y좌표 입력: ");
    scanf("%f, %f", &x, &y);

    (x>0 && y>0) ? printf("1사분면\n") : printf("");
    (x<0 && y>0) ? printf("2사분면\n") : printf("");
    (x<0 && y<0) ? printf("3사분면\n") : printf("");
    (x<0 && y<0) ? printf("4사분면\n") : printf("");


    return 0;
}
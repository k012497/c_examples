#include <stdio.h>
#define PI 3.14

int main ()
{
    int radius = 0;
    double area = 0.0l;

    printf("반지름을 입력하세요 : ");
    scanf("%d", &radius);

    area = radius*radius*PI;
    printf("원의 넓이는 %lf입니다. \n", area);

    return 0;

}
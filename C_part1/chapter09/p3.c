#include <stdio.h>
#define PI 3.141592

double cal_area(double radius);

int main()
{
    double radius = 0.0;
    printf("원의 반지름을 입력하세요 ");
    scanf("%lf", &radius);
    printf("원의 면적은 %lf입니다. \n", cal_area(radius));

    return 0;
}

double cal_area(double radius)
{
    double area = 0.0;
    area = PI * radius * radius;

    return area;
}

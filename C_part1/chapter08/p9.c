#include <stdio.h>

int main()
{
    double x = 0.0, y = 0.0;

    printf("실수 x의 값을 입력하세요 : ");
    scanf("%lf", &x);
    

    if (x <= 0)
        y = (x * x * x) - (9 * x) + 2;
    else
        y = (7 * x) + 2;

    printf("f(x)의 값은 %lf\n", y);

    return 0;
}

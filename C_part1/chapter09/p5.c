#include <stdio.h>
#include <math.h>
#define PI 3.141592

double sin_degree(int degree);

int main()
{
    int i = 0;

    for(i = 0 ; i <= 180 ; i = i + 10)
    {
        printf("sin(%d)의 값은 %lf\n", i, sin_degree(i));
    }
    return 0;
}

double sin_degree(int degree)
{
    double radian = 0;
    radian = degree * PI / 180.0;

    return sin(radian);
}
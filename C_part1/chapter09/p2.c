#include <stdio.h>

double f_to_c(double F);

int main()
{
    double F = 0.0;

    printf("화씨 온도를 입력하시오 : ");
    scanf("%lf", &F);
    printf("섭씨 온도는 %lf도입니다. \n", f_to_c(F));
    return 0;
}

double f_to_c(double F)
{
    int C = 0;
    C = 5.0/9.0 *(F- 32.0);

    return C;
}

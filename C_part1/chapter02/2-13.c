#include <stdio.h>

int main()
{
    float fnum1, fnum2 = 0.0f;
    double dnum1, dnum2 = 0.0l;

    printf("float형 실수 두 개 입력 : ");
    scanf("%f %e", &fnum1, &fnum2);
    printf("float형 실수 출력 : f1=%f, f2=%f\n", fnum1, fnum2);

    printf("double형 실수 두 개 입력 : ");
    scanf("%lf %lE", &dnum1, &dnum2);
    printf("double형 실수 출력 : d1=%lf, d2=%lf\n", dnum1, dnum2);


    return 0;
}
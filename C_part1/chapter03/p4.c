#include <stdio.h>

int main ()
{
    int F = 0;
    double C = 0.0l;

    printf("화씨값을 입력하시오: ");
    scanf("%d", &F);

    C = (5.0 / 9.0) * (F - 32.0);
    
    printf("섭씨값은 %lf도입니다.\n", C);

    return 0;
}
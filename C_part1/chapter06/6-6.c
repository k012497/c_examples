#include <stdio.h>

int main()
{
    float num1 = 3.4e+30;
    double num2 = 3.4e+30;

    printf("%f, %e \n", num1, num1);
    printf("%lf, %le \n", num2, num2);

    return 0;
}

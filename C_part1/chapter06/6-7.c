#include <stdio.h>

int main()
{
    float num1 = 0.123456789012345;
    double num2 = 0.123456789012345;

    printf("float형 : %f \n", num1);
    printf("double형 : %lf \n", num2);

    printf("float형 : %.15f \n", num1);
    printf("double형 : %.15lf \n", num2);

    return 0;
}


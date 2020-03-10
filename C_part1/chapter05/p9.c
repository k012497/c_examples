#include <stdio.h>

int main ()
{
    float AC = 0.0f, AE = 0.0f, BC = 0.0f, DE = 0.0f;

    printf("AC, AE, BC 입력 :");
    scanf("%f, %f, %f",&AC, &AE, &BC);
    
    DE= AE*BC/AC;

    printf("DE의 길이 : %f\n", DE);

    return 0;
}
#include <stdio.h>

int main ()
{
    float exchange_rate = 1179.90f;
    float KRW = 0.0f;
    int dallor = 0;
    

    printf("달러 입력: ");
    scanf("%d", &dallor);

    KRW = exchange_rate * (float)dallor;

    printf("%d달러 = %f원\n", dallor, KRW);

    return 0;
}
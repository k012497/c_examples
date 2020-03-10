#include <stdio.h>
#define POUND_to_KILO 0.45

int main ()
{
    float kilogram= 0.0f;
    float pound = 150.0f;

    kilogram = pound * POUND_to_KILO;
    printf("밀가루의 무게는 %fkg입니다.\n", kilogram);

    return 0;
}
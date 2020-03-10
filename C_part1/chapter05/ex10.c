#include <stdio.h>
#define FEET_TO_CENTIMETER 30.48

int main ()
{
    float meter= 0.0f;
    float feet = 15000.0f;

    meter = feet * FEET_TO_CENTIMETER;

    printf("비행기는 지상에서 %f미터 떨어져 있습니다.\n",meter);

    return 0;
}
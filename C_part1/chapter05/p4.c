#include <stdio.h>
#define CENTIMETER_to_INCH 2.54
#define FEET_to_INCH 12

int main ()
{
    int height_centi, height_inch, height_feet = 0;

    printf("키를 입력하시오: ");
    scanf("%d", &height_centi);

    height_inch = height_centi / CENTIMETER_to_INCH;
    height_feet = height_inch % FEET_to_INCH;
    height_inch -= height_feet;

    printf("%dcm는 %d피트 %d인치 입니다.\n", height_centi, height_feet, height_inch);

    return 0;
}
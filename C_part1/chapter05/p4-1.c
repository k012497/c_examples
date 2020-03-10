#include <stdio.h>

int main ()
{
    double height_centi, height_inch, height_feet = 0.0;
    int feet = 0;

    printf("키를 입력하시오: ");
    scanf("%lf", &height_centi);

    height_inch = height_centi / 2.54;
    height_feet = height_centi / (12 * 2.54);

    feet = height_feet;
    height_inch = (height_feet - (double)feet) * 12;

    printf("%3.2lfcm는 %d피트 %lf인치 입니다.\n", height_centi, feet, height_inch);

    return 0;
}
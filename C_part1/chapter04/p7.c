#include <stdio.h>

int main ()
{
    double mass = 0.0, velocity = 0.0;
    double kenergy = 0.0;

    printf("질량: ");
    scanf("%lf", &mass);
    printf("속도: ");
    scanf("%lf", &velocity);

    kenergy = 0.5 * mass * velocity * velocity;
    printf("운동에너지: %lf\n", kenergy);

    return 0;
}
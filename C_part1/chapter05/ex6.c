#include <stdio.h>
#define LIFE 100
#define MINUTE 2
#define SMOKE_YEAR 20

int main ()
{
    int daily_smoke = 0;
    float minusLifeMinute = 0.0f;
    float life_expectancy = 0.0f;

    printf("하루에 담배를 몇 개피 피우십니까? :");
    scanf("%d", &daily_smoke);
    

    minusLifeMinute = daily_smoke * MINUTE * 365 * SMOKE_YEAR;
    life_expectancy = LIFE - minusLifeMinute/(float)(365*24*60);

    printf("20년동안 하루에 %d개피 피우면 %3.3f살까지 살 수 있습니다.\n(단축된 수명 : %3.3f분)\n", daily_smoke, life_expectancy, minusLifeMinute);
    return 0;
}
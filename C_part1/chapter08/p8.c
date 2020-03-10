#include <stdio.h>

int main()
{
    int age = 0, time = 0, discount = 0, price = 0;

    printf("현재 시간과 나이를 입력하시오(시간, 나이) : ");
    scanf("%d %d", &time, &age);
    
    if ((age >=3 && age <=12) || (age >=65))
        discount = 1;
    else 
        discount = 0;

    if (time < 17 && discount == 0)
        price = 34000;
    else if (time < 17 && discount == 1)
        price = 25000;
    else if (time >= 17)
        price = 10000;

    printf("요금은 %d원 입니다.", price);
    
    return 0;
}

#include <stdio.h>

double get_tax(int income);

int main()
{
    int income = 0;
    printf("소득을 입력하세요 (만원) : ");
    scanf("%d", &income);

    printf("소득세는 %.2lf만원입니다.\n", get_tax(income));
    return 0;
}

double get_tax(int income)
{
    if (income > 1000)
    {
        return income * 0.1;
    }
    else
    {
        return income * 0.08;
    }
    
}
#include <stdio.h>

int sum(int num1, int num2);
int count(void);

int count_number = 0;

int main()
{
    int num1 = 0 , num2 = 0, result = 0;
    count_number = 0;

    for ( ; ; )
    {
        printf("숫자 두 개를 입력하세요(0 0 -> exit) : ");
        scanf("%d %d", &num1, &num2);
        if(num1 == 0 && num2 == 0) break;
        count();
        if(count() > 3) break;
        printf("%d\n", count_number); //몇 번 카운트 했는지 확인
        printf("덧셈 결과 : %d\n", sum(num1,num2));
    }

    printf("총 연산 횟수: %d\n", count());
    return 0;
}

int sum (int num1, int num2)
{
    return num1+num2;
}

int count(void)
{
    count_number ++;
    return count_number;
}

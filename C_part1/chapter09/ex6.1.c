#include <stdio.h>

void input_value(void);
int add(int num1, int num2);
int count(void);

int num1, num2;


int main()
{
    int sum = 0, i = 0; 

    for( ; ;)
    {
        input_value(); //두 정수를 입력 받는다.
        if(num1 == 0 && num2 == 0) break; //num1, num2가 0이면 종료
        sum = add(num1, num2); //합계 구하기
        i = count(); //카운트 센다
        if(i >= 3) break;
        printf("덧셈 결과 = %d\n", sum); //합계 출력
    }

    printf("전체 카운트 %d\n", i);

    return 0;
}

void input_value(void)
{
    for ( ; ; )
    {
        printf("1~100 두 정수를 입력 : ");
        scanf("%d %d", &num1, &num2);

        if((num1 < 0 || num1 > 100) || (num2 < 0 || num2 > 100))
        {
            printf("정신차려;;; 1~100;;;\n");
            continue;
        }
        else break;
    }
}

int add(int num1, int num2)
{
    return num1+num2;
}

int count(void)
{
    static int number = 0;
    number++;
    return number;
}
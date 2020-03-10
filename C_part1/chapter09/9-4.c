#include <stdio.h>

int sum(void);
int input_data(void);
void output_data(int);


int main()
{
    int num = 0, result = 0;

    printf("---프로그램 시작---\n");
    printf("정수 한 개를 입력하세요 : ");

    result = sum();
    output_data(result);

    return 0;
}

int sum(void)
{
    int result = 0, num = 0, i = 0;
    num = input_data();
    for ( i = 1; i <= num; i++)
    {
        result += i;
    }
    
    return result;
}

int input_data(void)
{
    int num = 0;
    for ( ; (num < 1 || num > 100) ; )
    {
        scanf("%d", &num);
    }
    return num;  
}

void output_data(int x)
{
    printf("1부터 덧셈 결과 : %d \n", x);
    return;
}

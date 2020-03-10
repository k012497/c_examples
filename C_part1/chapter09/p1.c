#include <stdio.h>

int even(int n);
int sign(int n);
int absolute(int n);
void result(int num);

int sign_of_num = 0;

int main()
{
    int num = 0;
    
    printf("정수를 입력하시오 : ");
    scanf("%d", &num);
    result(num);

    return 0;
}


int even(int n) //홀짝 판별
{
    if ((n % 2) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }     
}

int absolute(int n) //절댓값
{
    if (n>= 0) return n;
    else return -n;
}

int sign(int n) //부호 판별
{
    if(n > 0)
    {
        return 1;
    }
    else if (n == 0)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

void result(int num) //결과 출력
{
    if (even(num) == 1)
    {
        printf("even()의 결과 : 짝수\n");
    }
    else
    {
        printf("even()의 결과 : 홀수\n");
    }
    
    printf("absolute()의 결과 : %d\n", absolute(num));

    if (sign(num) == 1)
    {
        printf("sign()의 결과 : 양수\n");
    }
    else if(sign(num) == -1)
    {
        printf("sign()의 결과 : 음수\n");
    }
    else
    {
        printf("sign()의 결과 : 0\n");
    }
    
}
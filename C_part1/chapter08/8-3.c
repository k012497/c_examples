#include <stdio.h>

int main()
{
    int age = 0;

    printf("나이를 입력하세요");
    scanf("%d", &age);

    if(age < 19 || age > 100)
    {
        printf("회원가입이 불가능 합니다.\n");
    }
    else
    {
        printf("회원가입이 가능합니다.\n");
    }
    
    return 0;
}

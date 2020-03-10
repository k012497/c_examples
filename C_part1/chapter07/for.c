#include <stdio.h>

int main()
{
    int number = 0;
    fflush(stdin);
    printf("1부터 100까지 숫자 입력 ");
    scanf("%d", &number);
    
    for( ; number <= 0 || number>=101 ; ) //원하는 값만 입력 받고 싶을 때 경고문 만들기. 연습문제 이렇게 풀기 
    {
        printf("정신차려! %d말고 다시 입력해 \n", number);
        fflush(stdin);
        scanf("%d", &number);
    }

    return 0;
}

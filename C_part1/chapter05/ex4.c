#include <stdio.h>

int main ()
{
    int num1=0, num2=0, num3=0;
    int biggest=0;

    printf("정수 세 개 입력: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    biggest = ( num1>num2? (num1>num3? num1 : num3) : (num2>num3? num2: num3) );
     
    /*if문을 조건연산자로 바꾸는 연습

    if(num2 < num1 && num3 < num1)
    {
        biggest = num1;
    }
    else if (num1 < num2 && num3 < num2)
    {
        biggest = num2;
    }
    else
    {
        biggest = num3;
    }
    */
    
    
    printf("가장 큰 수 : %d\n", biggest);

    
    return 0;
}
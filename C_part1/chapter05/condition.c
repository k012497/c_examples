#include <stdio.h>

int main ()
{
    int num1 = 0, num2 = 0, num3 = 0, bufferNum = 0, max = 0;

    printf("세 정수 입력 : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    if (num1 > num2)
    {
        bufferNum = num1;
    }
    else
    {
        bufferNum = num2;
    }

    if(num3 > bufferNum)
    {
        max = num3;
    }
    else
    {
        max = bufferNum;
    }

    //bufferNum = (num1 > num2) ? (num2) : (num2);
    //max = (num3 > bufferNum) ? (num3) : (bufferNum);

    printf("%d, %d, %d 중 가장 큰 수는 %d입니다\n", num1, num2, num3, max);

    return 0;
}
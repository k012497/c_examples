#include <stdio.h>

int sum(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);

double divide(double num1, double num2);


int main()
{
    int num1 = 0, num2 = 0;

    
    /*
    do
    {
        printf("1~100 정수 입력 1 ");
        scanf("%d", &num1);
        printf("1~100 정수 입력 2 ");
        scanf("%d", &num2);
    } while (num1<1 || num1>100 || num2<1 || num2>100);
     */

    for ( ; num1<1 || num1>100 || num2<1 || num2>100 ; )
    {
        printf("1~100 정수 입력 1 ");
        scanf("%d", &num1);
        printf("1~100 정수 입력 2 ");
        scanf("%d", &num2);
    }


    printf("두 수의 합은 %d, 차는 %d, 곱은%d, 나누기는 %lf\n", sum(num1, num2), sub(num1, num2), mul(num1, num2), divide(num1, num2));
    return 0;
}


///*
int sum(int num1, int num2)
{
    int result = 0;
    result = num1 + num2;
    return result;
}
int sub(int num1, int num2)
{
    int result = 0;
    result = num1 - num2;
    return result;
}
int mul(int num1, int num2)
{
    int result = 0;
    result = num1 * num2;
    return result;
}
double divide(double num1, double num2)
{
    double result = 0;
    result = num1 / num2;
    return result;
}
//*/


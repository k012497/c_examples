#include <stdio.h>

int sum(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
double divide(double num1, double num2);
int input_data(void);


int main()
{
    int num1 = 0, num2 = 0;

    num1 = input_data();
    num2 = input_data();

    printf("%d + %d = %d\n", num1, num2, sum(num1, num2));
    printf("%d - %d = %d\n", num1, num2, sub(num1, num2));
    printf("%d * %d = %d\n", num1, num2, mul(num1, num2));
    printf("%d + %d = %lf\n", num1, num2, divide(num1, num2));

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
int input_data(void)
{
    int num = 1000;
    for ( ; num < -100 || num > 100 ; )
    {
        printf("정수 입력");
        scanf("%d", &num);
    }
    return num;  
}
//*/
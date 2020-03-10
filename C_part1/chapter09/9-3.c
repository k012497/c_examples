#include <stdio.h>

double div(double a, double b);
double input_data(void);
void output_data(double);
void information (void);

int main()
{
    double num1 = 0.0 , num2 = 0.0, result = 0.0;

    information();
    
    num1 = input_data();
    num2 = input_data();

    result = div(num1, num2);
    output_data(result);

    return 0;
}

double div(double a, double b)
{
    double result = 0.0;
    result = a / b;
    return result;
}

double input_data(void)
{
    double num = 0.0;
    for ( ; (num < 1 || num > 100) ; )
    {
        printf("실수 입력");
        scanf("%lf", &num);
    }
    return num;  
}

void output_data(double x)
{
    printf("나눗셈 결과 : %lf \n", x);
    return;
}

void information (void)
{
    printf("---프로그램 시작---\n");
    return;
}
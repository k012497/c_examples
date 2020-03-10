#include <stdio.h>
#include <math.h>

int main()
{
    int flag = 0;
    char menu = 0;
    double dnum1 = 0.0f, dnum2 = 1.0f, value = 0.0f;
    const double PI = 3.141592;

    //1. 디스플레이
    printf("******* 소진 계산기  *******\n");
    printf("*  𝑨 덧셈    𝑰 sin(호도법) *\n");
    printf("*  𝑺 뺄셈    𝑪 cos(호도법) *\n");
    printf("*  𝑴 곱셈    𝑻 tan(호도법) *\n");
    printf("*  𝑫 나눗셈  𝑭 절대값      *\n");
    printf("*  𝑹 제곱근  𝑷 거듭제곱    *\n");
    printf("*  𝑳 로그    𝑬 자연로그    *\n");
    printf("*        <𝑸 종료>          *\n");
    printf("****************************\n");


    //2.연산자 선택
    while(1)
    {
        for ( ; ; )
        {
            printf("연산자를 선택하시오");
            scanf("%c", &menu);
            while(getchar() != '\n');
            
            if(menu == 'Q' || menu == 'q') 
            {
                flag = 1;
                break;
            }; //q입력시 종료
            
            if(menu == 'A' || menu == 'a' || menu == 'S' || menu == 's' || menu == 'M' || menu == 'm' || menu == 'D' || menu == 'd' 
            || menu == 'R' || menu == 'r' || menu == 'I' || menu == 'i' || menu == 'C' || menu == 'c' || menu == 'T' || menu == 't'
            || menu == 'P' || menu == 'p' || menu == 'F' || menu == 'f' || menu == 'L' || menu == 'l' || menu == 'E' || menu == 'e') break;
        }


        if(flag == 1) 
        {
            printf("안녕히 가세요😊 \n");
            break;
        }


        //3. 값 받고 계산
        if(menu == 'A' || menu == 'a')
        {
            printf("더할 두 수를 입력하세요 : ");
            scanf("%lf %lf", &dnum1, &dnum2);
            while(getchar()!='\n');

            printf("%lf + %lf = %lf\n", dnum1, dnum2, dnum1 + dnum2);
        }

        if(menu == 'S' || menu == 's')
        {
            printf("뺄 두 수를 입력하세요 : ");
            scanf("%lf %lf", &dnum1, &dnum2);
            while(getchar()!='\n');

            printf("%lf - %lf = %lf\n", dnum1, dnum2, dnum1 - dnum2);
        }

        if(menu == 'M' || menu == 'm')
        {
            printf("곱할 두 수를 입력하세요 : ");
            scanf("%lf %lf", &dnum1, &dnum2);
            while(getchar()!='\n');

            printf("%lf * %lf = %lf\n", dnum1, dnum2, dnum1 * dnum2);
        }

        if(menu == 'D' || menu == 'd')
        {
            do
            {
                if(dnum2 == 0)
                {
                    printf("0으로 나눌 수 없습니다. ");
                }
                printf("나눌 두 수를 입력하세요 : ");
                scanf("%lf %lf", &dnum1, &dnum2);
                while(getchar()!='\n');
            } while (dnum2 == 0);

            printf("%lf ÷ %lf = %lf\n", dnum1, dnum2, dnum1 / dnum2);
        }
        
        if(menu == 'R' || menu == 'r')
        {
            printf("제곱근을 구할 수를 입력하세요 : ");
            scanf("%lf", &dnum1);
            while(getchar()!='\n');

            printf("%lf의 제곱근은 %lf\n", dnum1, sqrt(dnum1));
        }

        if(menu == 'I' || menu == 'i')
        {
            printf("sin(호도법) 각도를 입력하세요 : ");
            scanf("%lf", &dnum1);
            while(getchar()!='\n');
            value = dnum1 * PI / 180.0;
            printf("%lf\n", sin(value));
        }

        if(menu == 'C' || menu == 'c')
        {
            printf("cos(호도법) 각도를 입력하세요 : ");
            scanf("%lf", &dnum1);
            while(getchar()!='\n');
            value = dnum1 * PI / 180.0;
            printf("%lf\n", cos(value));
        }

        if(menu == 'T' || menu == 't')
        {
            printf("tan(호도법) 각도를 입력하세요 : ");
            scanf("%lf", &dnum1);
            while(getchar()!='\n');
            value = dnum1 * PI / 180.0;
            printf("%lf\n", tan(value));
        }

        if(menu == 'P' || menu == 'p')
        {
            printf("거듭제곱할 수와 횟수를 입력하세요 : ");
            scanf("%lf %lf", &dnum1, &dnum2);
            while(getchar()!='\n');

            printf("%.0lf의 %.0lf승은 %.0f\n", dnum1, dnum2, pow(dnum1, dnum2));
        }

        if(menu == 'F' || menu == 'f')
        {
            printf("절대값을 구할 수를 입력하세요 : ");
            scanf("%lf", &dnum1);
            while(getchar()!='\n');

            printf("%lf의 절대값은 %lf입니다.\n", dnum1, fabs(dnum1));
        }
        
        if(menu == 'L' || menu == 'l')
        {
            printf("log 10을 취할 수를 입력하세요 : ");
            scanf("%lf", &dnum1);
            while(getchar()!='\n');

            printf("log₁₀%lf = %lf입니다.\n", dnum1, log10(dnum1));
        }

        if(menu == 'E' || menu == 'e')
        {
            printf("자연로그를 취할 수를 입력하세요 : ");
            scanf("%lf", &dnum1);
            while(getchar()!='\n');

            printf("log₁₀%lf = %lf입니다.\n", dnum1, log(dnum1));
        }
    }//end of while
    
    return 0;
}//end of main
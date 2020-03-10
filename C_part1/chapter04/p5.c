#include <stdio.h>

int main ()
{
    double space = 0;
    const double squaremeter = 3.3058;
    
    printf("평을 입력하세요 : ");
    scanf("%lf", &space);

    space = space * squaremeter;
    printf("%lf평방미터 입니다.\n", space);

    return 0;
}
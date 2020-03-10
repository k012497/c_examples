#include <stdio.h>

int main()
{
    float radius = 0.0f, circumference = 0.0f, area = 0.0f;

    printf("원의 반지름 : ");
    scanf("%f", &radius);
    for (; radius < 10 || radius > 50 ;)
    {
        printf("잘못된 값. 다시 입력 : ");
        scanf("%f", &radius);        
    }

    area = 3.14 * radius * radius;
    circumference = (float)2 * 3.14 * radius;

    printf("원의 둘레 : %f\n", area);
    printf("원의 면적 : %f\n", circumference);
    
    return 0;
}

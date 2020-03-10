#include <stdio.h>
#define PI 3.141592

int main()
{
    float radius = 0.0f, velocity = 0.0f;
    float hour = 0.0f, min = 0.0f;

    printf("트랙의 반지름 : ");
    scanf("%f", &radius);
    for (; radius < 1 || radius > 300 ;)
        {
            printf("잘못된 값. 다시 입력 : ");
            scanf("%f", &radius);
        }
    
    printf("자동차의 속력 : ");
    scanf("%f", &velocity);

    hour = (float)(2 * PI * radius) / velocity;
    min = hour * 60;
    
    printf("한 바퀴를 완주하는데 걸리는 시간 : %.3f분\n", min);

    return 0;
}

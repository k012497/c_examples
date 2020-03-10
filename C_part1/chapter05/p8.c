#include <stdio.h>
#define PI 3.141592

int main ()
{
    float area= 0.0f, volume = 0.0f;
    float radius = 0.0f;
    
    printf("원의 반지름 입력: ");
    scanf("%f", &radius);

    area = radius * radius * PI;
    volume = (float)4/(float)3 * PI * radius * radius * radius;

    printf("구의 표면적: %f, 체적:%f \n", area, volume);

    return 0;
}
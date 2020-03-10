#include <stdio.h>

int main ()
{
    float base, height = 0.0f;
    float area = 0.0f;
    
    printf("삼각형의 밑변: ");
    scanf("%f", &base);

    printf("삼각형의 높이: ");
    scanf("%f", &height);

    area = 0.5 * base * height;

    printf("삼각형의 넓이: %f\n", area);

    return 0;
}
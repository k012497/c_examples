#include <stdio.h>

int main ()
{
    int width = 0;
    int height = 0;

    printf("가로 길이를 입력하세요 : ");
    scanf("%d", &width);

    printf("세로 길이를 입력하세요 : ");
    scanf("%d", &height);

    printf("직사각형의 넓이는 %d입니다. \n", width*height);
    
    return 0;
}
#include <stdio.h>

int get_area(int x, int y);

int main()
{
    int x = 0, y = 0;

    printf("밑변 길이: ");
    scanf("%d", &x);

    printf("높이: ");
    scanf("%d", &y);

    printf("사각형의 넓이는 %d입니다. \n", get_area(x,y));
    return 0;
}

int get_area(int x, int y)
{
    return x * y;
}
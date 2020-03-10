#include <stdio.h>

int main ()
{
    int num = 0;

    printf("점수입력");
    scanf("%d", &num);

    switch (num)
    {
    case 10:
        printf("A\n");
        break;

    case 9:
        printf("B\n");
        break;

    case 8:
        printf("C\n");
        break;
    
    default:
        printf("F\n");
        break;
    }
}
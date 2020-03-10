#include <stdio.h>

int main()
{
    int count = 0;

    for(count = 0 ; count < 5 ; count++)
    {
        printf("반복내용: %d\n", count);
    }

    printf("반복문을 종료한 후 : %d\n", count);

    return 0;
}

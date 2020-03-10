#include <stdio.h>

int main()
{
    char value;

    printf("input = ");
    scanf("%d", &value);

    for (;value < 65 || value > 90 ;)
    {
        printf("잘못된 값. 다시 입력 : ");
        scanf("%d", &value);
    }
    
    printf("입력한 코드에 해당하는 문자는 %c입니다.\n", value);

    return 0;
}

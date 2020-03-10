#include <stdio.h>

int main()
{
    int height = 0, age = 0;

    printf("키를 입력하시오(cm) : ");
    scanf("%d", &height);

    printf("나이를 입력하시오 : ");
    scanf("%d", &age);

    if (height >= 140 && age >=10)
        printf("타도 좋습니다.");
    else
        printf("죄송합니다."); 
}
#include <stdio.h>

int main()
{
    int height = 0, weight = 0, standard = 0;

    printf("체중과 키를 입력하시오(키, 체중) : ");
    scanf("%d %d", &height, &weight);

    standard = (height - 100) * 0.9;
    
    if (weight > standard)
    {
        printf("과체중 입니다.\n");
    }
    else if (weight == standard)
    {
        printf("정상체중 입니다.\n");
    }
    else if (weight < standard)
    {
        printf("저체중 입니다.\n");
    }
    
    return 0;
}

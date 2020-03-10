#include <stdio.h>

int main()
{
    int num = 0, count = 0, sum = 0;
    for(;1;)
    {
        printf("정수를 입력하세요 : ");
        scanf("%d", &num);
        sum = sum + num;

        if(num ==0)
        {
            printf("총합 = %d, 총 입력 횟수 = %d번 \n", sum, count);
            break;
        }
        
        count++;

    }
    return 0;
}

#include <stdio.h>

int main()
{
    int score = 0, sum = 0, count = 0;
    float avg = 0.0f;

    printf("열 과목 점수의 평균 계산\n");
    for(;1;)
    {
        printf("점수를 입력해주세요 : ");
        scanf("%d", &score);
        sum = sum + score;
        count++;
        if(count == 10) break;
    }
    
    avg = (float)sum/(float)count;
    printf("열 과목의 평균 점수는 %.1f\n", avg);
        
    return 0;
}

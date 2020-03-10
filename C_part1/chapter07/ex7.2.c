#include <stdio.h>

int main()
{
    int subject = 0, i = 0, sum = 0;
    double avg = 0.0;

    for ( i = 1; i < 11; i++)
    {
        printf("%d번째 과목 점수 입력 : ", i);
        scanf("%d", &subject);

        if(subject > 100 || subject < 0)
        {
            printf("잘못된 값\n");
            i--;
            continue;
        }
        sum += subject;
    }

    avg = sum / 10.0;
    printf("10과목의 총 점은 %d, 평균은 %.2lf \n", sum, avg);
    
    return 0;
}

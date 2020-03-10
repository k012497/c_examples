#include <stdio.h>

int main()
{
    int subject = 0, sum = 0, i = 0;
    double avg = 0.0;

    for ( i = 0; i < 10; i++)
    {
        printf("점수 입력 : ");
        scanf("%d", &subject);

        if(subject < 0 || subject > 100)
        {
            printf("0~100점사이의 점수 입력\n");
            i--;
            continue;
        }

        sum += subject;
    }

    avg = sum / 10.0;
    printf("열 과목 점수의 총점은 %d, 평균은 %lf\n", sum, avg);
    
    return 0;
}

#include <stdio.h>

int main()
{
    int student_score [10] = {0,};
    int i = 0, sum = 0;

    for ( i = 0; i < 10; i++)
    {
        printf("%d번 학생 점수 : ", i + 1);
        scanf("%d", &student_score[i]);
    }

    for ( i = 0; i < 10; i++)
    {
        sum += student_score[i];
    }

    for ( i = 0; i < 10; i++)
    {
        printf("%d번 학생의 점수 : %d\n", i+1, student_score[i]);
    }

    printf("===================================\n");
    printf("총점은 %d점, 평균은 %.2lf점 입니다.\n", sum, (double)sum/10.0);
    
    
    return 0;
}

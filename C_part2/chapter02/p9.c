#include <stdio.h>
#include <time.h>

int main()
{
    int score[5][4] = {0};
    int i = 0, j = 0, max = 0, min = 100;

    for ( i = 0; i < 5; i++) //학번 입력
    {
        score[i][0] = i+1;
    }

    srand(time(NULL));
    
    printf("학번/ 시험1/ 시험2/ 시험3\n");
    for ( i = 1; i < 5; i++) //점수 난수로 입력
    {
        printf("%d번 ", i);
        for ( j = 0; j < 4; j++)
        {
            score[i][j]= rand()%100; //랜덤 점수 범위는 0~100점

            if (max < score[i][j])
            {
                max = score[i][j];
            }

            if (min > score[i][j])
            {
                min = score[i][j];
            }
            printf("%d점 ", score[i][j]);
        }
        printf("\n");
    }
    printf("시험 %d의 최고점은 %d점, 최저점은 %d점\n", i, max, min);
    
    return 0;
}

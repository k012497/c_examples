#include <stdio.h>

int main()
{
    int score = 0;
    do
    {
        printf("점수 입력");
        scanf("%d", &score);
    } while (score < 1 || score > 100);
    
    if(score <= 100 && score > 95)
    {
        printf("%d점, A+학점\n", score);
    }
    else if(score <= 95 && score > 90)
    {
        printf("%d점, A학점\n", score);
    }
    else if(score <= 90 && score > 85)
    {
        printf("%d점, B+학점\n", score);
    }
    else if(score <= 85 && score > 80)
    {
        printf("%d점, B학점\n", score);
    }
    else if(score <= 85 && score > 80)
    {
        printf("%d점, C+학점\n", score);
    }
    else if(score <= 85 && score > 75)
    {
        printf("%d점, C학점\n", score);
    }
    else
    {
        printf("%d점, F학점\n", score);
    }
    

    return 0;
}

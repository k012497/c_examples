#include <stdio.h>

int main ()
{
    int i = 0;
    int student[5];

    for(i = 0 ; i < 3 ; i++)
    {
        printf("student[%d] = ", i);
        scanf("%d", &student[i]);
    }

    for(i = 0 ; i < 5 ; i++)
    {
        printf("%d번째 학생의 점수 :  %d\n", i + 1, student[i]);
    }

    return 0;
}
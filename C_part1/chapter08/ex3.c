#include <stdio.h>

int main()
{
    int score= 0;
    do
    {
        printf("점수를 입력하세요");
        scanf("%d", &score);
    } while (score<1 || score>100);
        
    
    for ( ; ; )
    {
    if (score == 0) break;
    
    if (score >= 90 && score <= 100)
        printf("A\n");
    else if (score >= 80 && score <= 89)
        printf("B\n");
    else
        printf("F\n");    
    }
    

    return 0;
}

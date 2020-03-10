#include <stdio.h>

int main()
{
     int score= 0;
        
    
    for ( ; ; )
    {
        do
        {
            printf("점수를 입력하세요");
            scanf("%d", &score);
        } while (score<1 || score>100);
        
        if (score >= 90 && score <= 100)
            score = 'a';
        else if (score >= 80 && score <= 89)
            score = 'b';
        else if (score == 0) 
            break;

        
        switch (score)
        {
        case 'a':
            printf("A\n");
            break;

        case 'b':
            printf("B\n");
            break;
        
        default:
            printf("F\n");
            break;
        }
    }
    
    return 0;
}

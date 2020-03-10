#include <stdio.h>

int b_rand(void);

int main()
{
    int selection = 0;
    char quit = 0;

    for ( ; ; )
    {
        for(;;)
        {
        printf("앞면 또는 뒷면(1 또는 0)입력 : ");
        scanf("%d", &selection);
        if(selection == 1 || selection == 0) break;
        }
        
        if (b_rand() == selection)
        {
            printf("맞았습니다!\n");
        }
        else
        {
            printf("틀렸습니다.\n");
        }

        for(;;)
        {
            while(getchar()!='\n'); //위에 scanf에서 받은 엔터값 남은 거 지워버리기
            printf("계속 하시겠습니까? (y or n): ");
            scanf("%c", &quit);
            
            if(quit == 'y' || quit == 'Y' || quit == 'n' || quit == 'N') break;
        } 

        if (quit == 'n' || quit == 'N') break;
    }

    return 0;
}

int b_rand(void)
{
    return rand()%(1-0+1)+0;
}
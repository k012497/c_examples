#include <stdio.h>

int main()
{
    int multiple[9] = {0,};
    int num = 0, i = 0;

    for ( ; ; )
    {
        for (;;)
        {
            printf("출력할 단 선택(1~19) : ");
            scanf("%d", &num);

            if(num==20) exit(1);
            else if(num > 0 && num < 20) break;
        }
        
        for ( i = 0; i < 10; i++)
        {
            multiple[i] = num * (i+1);
            printf("%d * %d = %d\n", num, i+1, multiple[i]);
        }
    }
    
    return 0;
}

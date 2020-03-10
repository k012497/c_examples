#include <stdio.h>

int main()
{
    int num = 0, num1 = 0, num2 = 1, num3 = 0, i = 0, flag = 0;

    printf("몇 번째 항까지 구할까요? : ");
    scanf("%d", &num);

    printf("0 1 ");

    for ( i = 0; i < num - 2; i++)
    {
        //if (flag ==0 )
        //{
         //   printf("0 1 ");
           // flag = 1;
        //}
        num3= num1 + num2;
        printf("%d ", num3);
        num1 = num2;
        num2 = num3;
    }

    printf("\n");

    return 0;
    
}
/*
int main()
{
    long int num = 0, num1 = 0, num2 = 1, num3 = 0, i = 0, flag = 0;

    printf("몇 번째 항까지 구할까요?");
    scanf("%ld", &num);
    
    //printf("%ld ", num1);
    //printf("%ld ", num2);

    printf("0 1 ");

    for ( i = 0; i < num - 2 ; i++)
    {
        //if (flag == 0) 
        {
        //    printf("0 1 ");
        //    flag = 1;
        //}
        num3 = num1 + num2;
        printf("%ld ", num3);
        num1 = num2;
        num2 = num3;
    }

    printf("\n");
    
    return 0;
}

 */
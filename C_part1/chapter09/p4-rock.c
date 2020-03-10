#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int computer_random_value(void); //함수 타입 선언
int user_select_value(void);
void match_result(int comValue, int userValue);

int main()
{
    int i = 0, comValue = 0, userValue = 0;
    
    userValue = user_select_value();
    comValue = computer_random_value();
    match_result(comValue, userValue);


    /*
    for(i = 0 ; i < 10 ; i++)
    {
        //printf("%d\n", rand()%(49-5+1)+5); //5~49
        printf("%d\n", rand() % (21154 - 4727 + 1) + 4727); //4727~21154
        //printf("%d\n", s_rand(time(NULL)));
    }
     */

    return 0;
}


int computer_random_value(void)
{
    int comValue = 0;
    srand(time(NULL));
    comValue = rand()%(3-1+1)+1;
    return comValue;
} //함수 타입 정의

int user_select_value(void)
{
    int userValue = 0;
    do
    {
        printf("선택하시오(1:가위, 2:바위, 3:보) : ");
        scanf("%d", &userValue);
    } while(userValue< 1 || userValue >3);
    return userValue;
}//함수 타입 정의

void match_result(int comValue, int userValue)
{
    switch (userValue - comValue)
    {
    case 0:
        printf("비겼어요 :)\n");
        break;

    case 1:
    case -2:
        printf("이겼어요 !!!!!! 🤪\n");
        break;

    case -1:
    case 2:
        printf("졌어요,,,,😤\n");
        break;
    
    default:
        printf("도대체 무슨 값을 입력했어요 ?!\n");
        break;
    }
    return ;
}//함수 타입 정의
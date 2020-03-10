 
#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <stdlib.h>
#define QUANTITY 4
#define PRICE 5000
#define DONATION 2700
 
void select_menu (void);
void input_money(void);
void print_book (void);
void print_change (void);
 
int genreNum = 0;
int totalMoney = 0;
int quit = 0; 
 
char *book[6][QUANTITY] = {{" "," "," "," "},
{"미비포유", "치아문단순적소미호", "플립", "하이생소묵"}, 
{"직지", "악의", "조용한 무더위", "내가 그를 죽였다"},
{"넓고 얕은 지식", "심리학의 지식", "지식 e", "지식의 단련법"},
{"오 마이 괌", "북유럽 셀프트래블", "계절을 걸어요", "크루즈 여행"},
{"리더를 위한 지식", "시작의 기술", "순간의 힘", "권력의 법칙"}
};
 
 
int main ()
{
 
    //1. 24시간 켜져있는 자판기  
    //2. 장르를 확인하고 결정한다. 장르 번호를 입력받음
    //무한루프 - 전원 나가면 종료
 
    for ( ; ; )
    {
        totalMoney = 0;
 
for(;;)
{
select_menu();
 
//3. 가격을 안내하고 5천원 이상의 금액을 입력 받음
printf("책은 1권당 %d원입니다.\n", PRICE);
printf("(다시 선택하려면 1을, 계속 진행하시려면 아무 숫자를 눌러주세요)\n");
scanf("%d", &quit);
if (quit == 1) continue;
else 
{
printf("%d원을 넣어 주세요\n", PRICE);
break;
}
}
 
        input_money(); 
 
        //4. 나온 책을 받는다. 남은 금액 = 입력 금액 - 5000, count++
        print_book();
 
 
        //5. 남은 금액이 있을 시 거스름돈 출력하고 종료
        print_change();
    }
 
    return 0 ;
}
 
 
 
void select_menu (void)
{
quit = 0; //quit 초기화
 
printf("┌───────────────────────────┐\n");
    printf("│                                                      │\n");
printf("│                   1권에 5 0 0 0 원 !                 │\n");
    printf("│ 설렘자판기는 헌 책을 기부받아 운영되는 자판기입니다. │\n");
    printf("│         1권당 %d원이 헌책방으로 기부 됩니다.       │\n", DONATION);
printf("│                                                      │\n");
    printf("│======================설렘자판기======================│\n");
printf("│                                                      │\n");
    printf("│             ① 로맨스 ② 추리 ③ 지식/교양           │\n");
    printf("│              ④ 여행 ⑤ 자기계발 ⑥ 랜덤             │\n");
    printf("│                                                      │\n");
printf("│                     ⓞ power off                     │\n");
printf("│                   ※동전 사용 불가                   │\n");
printf("│                                                      │\n");
    printf("└───────────────────────────┘\n");
Sleep(1000);
    
 
    //2. 장르를 확인하고 결정한다. 장르 번호를 입력받음
 
    for ( ; ; )
    {
        printf("장르 번호를 선택해주세요 : ");
        scanf("%d", &genreNum);
 
        if (genreNum == 0) 
        {
            break;
        }
        else if(genreNum < 1 || genreNum > 6)
        {
            printf("1 ~ 6번의 ");
        }
        else break;
    }
 
 
    if (genreNum == 0) //0(power off)을 선택 시 프로그램 종료
    {
        printf("종료중 ");
        fflush(stdout);
        Sleep(1000); 
        printf("·· "); 
        fflush(stdout);
        Sleep(1000);
        printf("·· "); 
        fflush(stdout);
        Sleep(1000);
        printf("··\n"); 
fflush(stdout);
        Sleep(1000);
        exit(1); 
    }
 
 
    return ;
}
 
 
void input_money(void)
{
 
    int money=0;
    char select=0;
 
    Sleep(1000);
 
    for( ; ; )
    {
printf("투입 금액 : ");
        scanf("%d",&money);
        switch(money)
        {
        case  1000: case  5000:  case 10000:  case 50000:
            totalMoney = totalMoney + money;
            printf("%5d원 / %5d원\n", totalMoney, PRICE);
            break;
 
        default: printf("%d원을 반환합니다. 사용가능한 지폐만 넣어주세요\n", money);  break; //입력한 돈 반환
        }
        if (totalMoney >= PRICE)  break;
   }
   Sleep(1000);
 
   return;
}
 
 
 
void print_book (void)
{
    srand(time(NULL));
    printf("잠시만 기다려주세요 \n");
    Sleep(1000);
SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 3);
    printf("┌───────────┐\n");
    printf("│                      │\n");
    if(genreNum == 6)
    {
        genreNum = (rand()%5)+1; //랜덤을 택했을 경우 genreNum = (rand()%5)+1로 장르번호를 1~5로 바꾼 후 출력
    }
    printf("│%21s │\n", book[genreNum][rand()%(QUANTITY)]);
printf("│              ───  │\n");
    printf("│                      │\n");
    printf("│                      │\n");
    printf("│                      │\n");
    printf("│                      │\n");
    printf("│                      │\n");
    printf("│                      │\n");
    printf("└───────────┘\n");
    totalMoney -= PRICE;
SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 7);
    Sleep(1000);
 
    return ;
}
 
 
 
void print_change (void)
{
    if(totalMoney > 0)
    {
        printf("거스름돈 %5d원을 받아가세요.\n", totalMoney);
        Sleep(1000);
 
SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 6);
        printf("┌───┐\n");
        printf("│%6d│\n", totalMoney);
        printf("└───┘\n");
SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), 7);
        printf("%d원이 기부되었습니다! 이용해주셔서 감사합니다 :) \n\n", DONATION);
printf("잠시 후 처음 화면으로 돌아갑니다. ");
printf("3.. ");
Sleep(1000);
printf("2.. ");
Sleep(1000);
printf("1.. \n");
Sleep(1000);
    }
 
    else
    {
        printf("%d원이 기부되었습니다! 이용해주셔서 감사합니다 :) \n\n", DONATION);
printf("잠시 후 처음 화면으로 돌아갑니다. ");
printf("3.. ");
Sleep(1000);
printf("2.. ");
Sleep(1000);
printf("1.. \n");
Sleep(1000);
    }
 
    return;
}
 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define COUNT 3

int print_menu(); //메뉴 화면 출력
int user_select (void); //사용자의 가위, 바위, 보 입력 받기
void game_output(int userValue, int comValue); //사용자와 컴퓨터 값의 차를 통해 승,무,패 결정하여 출력(사용자 입장)
void com_probability(int comValue); //COUNT번의 게임에서 컴퓨터가 가위, 바위, 보를 낸 확률 계산

int userWin = 0, userLose = 0, userDraw = 0; //전역변수 
int comScissor = 0, comRock = 0, comPaper = 0; //전역변수

int main()
{
    int selectNo = 0, comValue = 0, userValue = 0, result = 0, i =0;

    for (;;)
    {
        
        selectNo = print_menu();

        switch (selectNo)
        {
        case 1: //게임 시작
            userWin = 0; userLose = 0; userDraw = 0; //게임 전적 초기화
            comScissor = 0, comRock = 0, comPaper = 0; //컴퓨터가 가위,바위,보 낸 횟수 초기화
            srand(time(NULL)); //난수 생성

            for ( i = 1 ; i <= COUNT ; i++)
            {
                //printf("%d번째 ", i); //잘못 입력했을 때도 카운팅?
                comValue = rand()%(3-1+1)+1; //컴퓨터 값
                com_probabilitys(comValue); //컴퓨터가 내는 거 확률 계산
                userValue = user_select(); //사용자 값
                game_output(userValue, comValue);
            }
            break;
            

        case 2: //게임 결과
            printf("사용자 전적: %d전 %d승 %d무 %d패 \n", COUNT, userWin, userDraw, userLose);
            printf("컴퓨터 확률: 가위 %.2lf%% 바위 %.2lf%% 보 %.2lf%% \n", comScissor/(double)COUNT *100, comRock/(double)COUNT *100, comPaper/(double)COUNT *100);
            break;

        case 3: //게임 재시작
            continue;
            break;

        case 4: //게임 종료
            printf("우리 다시 만나용~~\n");
            exit(1);
            break;
        
        default:
            printf("정신 차려 !!! 😡\n");
            break;
        }
    }
    
    return 0;    
}

int print_menu(void) //선택 메뉴
{
    static int menuCount = 0;
    int selectNo = 0;

    printf("\n\ni************************i\n");
    printf("|       1. 게임 시작     |\n");
    printf("|       2. 게임 결과     |\n");
    printf("|       3. 게임 재시작   |\n");
    printf("|       4. 게임 종료     |\n");
    printf("|      게임 횟수 : %d번   |\n", menuCount++);
	printf("i************************i\n");
    
    for( ; selectNo < 1 || selectNo >4 ; )
    {
        printf("선택번호 : ");
        scanf("%d", &selectNo);
    }

    return selectNo;
}

int user_select (void) // 사용자의 가위, 바위, 보 입력 받기
{
    static int userCount=0;
    int userValue = 0;

    for(; ;)
    {
        printf("%d번째 입력 (가위 : 1, 바위 : 2, 보 : 3) : ", ++userCount);
        scanf("%d", &userValue);
        if (userValue >= 1 && userValue <=3) 
        {
            if(userCount == 3)
            {
                userCount = 0;                
            }
            break;
        }
        else 
        {
            userCount--;
            printf("잘못 입력하셨어요. 다시 입력!\n");
        }  
    }
    
    return userValue;
}

void game_output(int userValue, int comValue) //사용자 기준 승, 무, 패 출력
{
    int result = userValue - comValue;
    
    switch (result)
    {
    case 0:
        printf("무승부 :)\n");
        userDraw++;
        break;

    case 1:
    case -2:
        printf("승리 🤪\n");
        userWin++;
        break;

    case -1:
    case 2:
        printf("패배,,,,😤\n");
        userLose++;
        break;
                        
    default:
        break;
    } 
    return ; 
}

void com_probability(int comValue) //컴퓨터가 COUNT회 동안 낸 가위, 바위, 보를 확률로 계산
{
    switch (comValue)
    {
    case 1: comScissor++; break;
    case 2: comRock++; break;
    case 3: comPaper++; break;
    
    default:
        printf("컴퓨터가 틀리면 어떡해ㅡㅡ\n");
        break;
    }
    return ;
}
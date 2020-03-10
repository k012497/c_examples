#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int computerNumbering(void);
int userNumbering(void);
char* printResult(int a, int b);
void printGraphic(int a);
void printVS(void);
int	main(void)
{
	int i=0, userNum=0, comNum=0;
	char *result;
	srand((unsigned)time(NULL));				//난수 발생기의 시작점을 초기화한다
	
	do
	{
		comNum=computerNumbering();
		userNum=userNumbering();
		if(userNum==0) break;					//사용자가 0을 입력할 시 프로그램 종료
		
		printf("\n\ni************************i\n");
		printf("|       ☆  YOU  ☆      |\n");
		printf("i************************i\n");
		printGraphic(userNum);

		printVS();
		printf("\n\ni************************i\n");
		printf("|       ☆  COM  ☆      |\n");
		printf("i************************i\n");
		printGraphic(comNum);
		result=printResult(userNum, comNum);
		printf("컵퓨터 %d : 입력값: %d , [ %s ]입니다. \n", comNum,userNum,result);
	}while(userNum!=0);
	return 0;
}
int computerNumbering()
{
	int result=0;
	result=rand()%(3-1+1)+1;
	return result;
}
int userNumbering()
{
	int result=0;
	do										//사용자의 입력을 받기
	{
		printf("선택하시오 (1:가위 2:바위 3:보) :");
		scanf("%d",&result);
	}while(result<0||result>3);
	return result;
}
char *printResult(int a, int b)
{
	char *result = new char[100];
	switch(a-b)					//판단 시작
	{
		case 0 :
			strcpy(result,"비김");
			break;
		case 1 : case -2 :
			strcpy(result,"승");
			break;
		case -1 : case 2 :
			strcpy(result,"패");
			break;
	}
	return result;
}
void printGraphic(int a)
{
	switch(a)					//판단 시작
	{
		case 1 :
			printf("\n");
			printf("     .---.          .---.\n");
			printf("     |    |        /    |\n");
			printf("      |    |      /    /\n");
			printf("       |    |    /    /\n");
			printf("        |     |_/    /\n");
			printf("     -----.   ---- --.\n");
			printf("   /   ...|  /   /   /\n");
			printf("   |  ＼--  |   |   ||\n");
			printf("    |    |  |__|__ | |\n");
			printf("    |     |   |      |\n");
			printf("     |               |\n");
			printf("     |               /\n");
			printf("      |_____________|\n");
			break;
		case 2 :
			printf("\n");
			printf("       /````＼----.-----.\n");
			printf("    __/__`_   ＼  ＼  ＼ ＼\n");
			printf("  /         '   |   |   |  |\n");
			printf("  |         |   /   /  /  /\n");
			printf("  |  ＼____|/__/___/__/--\n");
			printf("   |        ＼      /    ＼\n");
			printf("    |                     |\n");
			printf("    ＼                    |\n");
			printf("      ＼                 /\n");
			printf("         ---------------\n");
			break;
		case 3 :
			printf("           .--.\n");
			printf("       .--.|  |.--.\n");
			printf("      |   |   |   |.-.    \n");
			printf("      |   |   |   |  |      \n");
			printf("      |   |   |   |  |\n");
			printf("   .--.   |   |   |  |\n");
			printf("   |  |   |   |   |  | \n");
			printf("   |  |   |   |   |  |\n");
			printf("   |   |````＼--.--.- `\n");
			printf("   |   -＼            |\n");
			printf("   |     ＼     -----_|\n");
			printf("   ＼      --         |\n");
			printf("    ＼                / \n");
			printf("     |                |\n");
			printf("      |               /     \n");
			printf("       |-------------|\n");

			break;
	}
}
void printVS(void)
{
	printf("\n");
	printf(".-----.         .-----.      _.--------------.\n");
	printf("＼    ＼       /     /     /    _____________/\n");
	printf(" ＼    ＼     /     /     /    /\n");
	printf("  ＼    ＼   /     /     /    /_____________.\n");
	printf("   ＼    ＼ /     /      ._____________      |\n");
	printf("    ＼           /                    /     /\n");
	printf("     ＼         /       .------------'     /\n");
	printf("      ＼_______/       /_________________ /\n");
}
#include <stdio.h>
#define SIZE 255

/*
int main()
{
    char name[SIZE] ;
    printf("당신의 이름을 입력해주세요");
    scanf("%s", &name[0]); //or name

    printf("당신의 이름은 %s\n", &name[0]); //or name
    return 0;
}
 */


int main()
{
    char *p;
    char name[SIZE] ;
    printf("당신의 이름을 입력해주세요");
    scanf("%s", p); //or &p[0]

    printf("당신의 이름은 %s\n", p); //or &p[0]
    return 0;
}
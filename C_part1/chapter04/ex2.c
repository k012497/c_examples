#include <stdio.h>
#define YEAR 2010
#define AGE 20
#define BIRTH_YEAR 1990

int main ()
{

    const int BROTHER_AGE = 18;
    const int BROTHER_YEAR = 1992;

    printf("올해는 %d년입니다\n", YEAR);
    printf("내 나이는 %d살입니다.\n", AGE);
    printf("나는 %d년에 태어나 %d번째 해가 되었습니다.\n", BIRTH_YEAR, AGE);
    printf("내 동생의 나이는 %d살입니다.\n", BROTHER_AGE);
    printf("내 동생은 %d년에 태어나 %d번째 해가 되었습니다.\n", BROTHER_YEAR, BROTHER_AGE);

    return 0;

}
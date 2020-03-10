#include <stdio.h>

void alpha(char letter);

int main()
{
    char letter = 0;
    for ( ; ; )
    {
        printf("알파벳을 입력하세요");
        scanf("%c", &letter);
        if ((letter >= 'A' && letter <= 'Z') || (letter >= 'a' && letter <= 'z')) break;
    }

    alpha(letter);
    
    return 0;
}

void alpha(char letter)
{
    if(letter >= 64 && letter <= 90)
    {
        printf("입력한 %c는 %d번째 알파벳 입니다.\n", letter, letter-64);
    }    
    else if (letter >= 97 && letter <= 122)
    {
        printf("입력한 %c는 %d번째 알파벳 입니다.\n", letter, letter-96);
    }
    else
    {
        printf("잘못된 값\n");
    }
    
    return ;
}
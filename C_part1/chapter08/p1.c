#include <stdio.h>

int main()
{
    char letter = 0;

    printf("문자를 입력하시오 : ");
    scanf("%c", &letter);

    switch (letter)
    {
    case 'a': case 'A': case 'e': case 'E': case 'i':
    case 'I': case 'o': case 'O': case 'u': case 'U':
        printf("모음입니다.\n");
        break;
    
    default:
        printf("자음입니다.\n");
        break;
    }
    return 0;
}

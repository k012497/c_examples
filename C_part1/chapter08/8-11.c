#include <stdio.h>

int main()
{
    char ch = 0;
    
    printf("(T)hursday, (F)riday, (S)aturday\n");
    scanf("%c", &ch);

    switch (ch)
    {
    case  'T':
    case  't':
        printf("Thursday\n");
        break;
    
    case  'F':
    case  'f':
        printf("Friday\n");
        break;

    case  'S':
    case  's':
        printf("Saturday\n");
        break;
    
    default:
        break;
    }

    /*
    if (ch == 't' || ch == 'T')
    {
        printf("Thursday\n");
    }
    else if (ch == 'f' || ch == 'F')
    {
        printf("Friday\n");
    }
    else if (ch == 's' || ch == 'S')
    {
        printf("Saturday\n");
    }
     */

    return 0;
}
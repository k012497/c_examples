/*
p541 

#include <stdio.h>

int main()
{
    int i = 0;
    char *str = "abc";

    str[0] = 'k';
    for ( i = 0; i < 6; i++)
    {
        printf("str[%d]=%d, %c\n", i, str[i], str[i]);
    }
    
    return 0;
}
*/


#include <stdio.h>

int main()
{
    int i = 0;
    char *str = "abc";
    char b[4]="abc";

    //str[0] = 'k';
    for ( i = 0; i < 6; i++)
    {
        printf("str[%d]=%d, %c\n", i, str[i], str[i]);
    }

    b[0]='k';
    for ( i = 0; i < 4; i++)
    {
        printf("b[%d]=%d, %c\n", i, b[i], b[i]);
    }
    
    return 0;
}
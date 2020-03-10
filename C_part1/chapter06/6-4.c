#include <stdio.h>

int main()
{
    char num1 = -129;
    char num2 = 128;
    
    printf("%d \n", num1);
    printf("%d \n", num2);

    num1 = -130;
    num2 = 129;

    printf("%d \n", num1);
    printf("%d \n", num2);
    
    return 0;
}

#include <stdio.h>

int main ()
{
    int num1 = 0, num2 = 0;

    printf("input : ");
    scanf("%d", &num1);

    printf("input : ");
    scanf("%d", &num2);
    
    num1<num2 ? printf("Smaller Number : %d\n", num1) : printf("");
    num1>num2 ? printf("Smaller Number : %d\n", num2) : printf("");
    num1==num2 ? printf("같음\n") : printf("");
    
    /*
        num1<num2 ? printf("Smaller Number : %d\n", num1) : (num1 == num2 ? printf("같음\n") : printf("Smaller Number : %d\n", num2));
     */
    
    return 0;
}
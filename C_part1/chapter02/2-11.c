#include <stdio.h>

int main() 
{
    int age = 0;

    printf("What is your age?: ");
    scanf("%d", &age);
    printf("Wow! Really? Are you %d years old?\n", age);

    return 0;
}
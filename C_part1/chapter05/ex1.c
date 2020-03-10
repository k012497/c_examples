#include <stdio.h>

int main ()
{
    int x = 0, y = 0, z = 0;

    printf("input x : ");
    scanf("%d", &x);

    printf("input y : ");
    scanf("%d", &y);

    printf("input z : ");
    scanf("%d", &z);

    printf("(x+y)*(x+z)/(y%z) =  %d\n",(x+y)*(x+z)/(y%z));

    return 0;
}
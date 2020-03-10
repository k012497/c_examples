#include <stdio.h>

int main()
{
    int n = 0, r = 0, i = 0, permutation = 1;

    do
    {
        printf("n의 값: ");
        scanf("%d", &n);

        printf("r의 값: ");
        scanf("%d", &r);
    } while (n <= r);

    for ( i = n; i >= n-r+1 ; i--)
    {
        permutation *= i;
    }
    
    printf("순열의 값은 %d입니다. \n", permutation);

    return 0;
}

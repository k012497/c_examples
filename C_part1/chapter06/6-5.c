#include <stdio.h>
#include <float.h>

int main()
{
    printf("float의 최솟값 %e, 최댓값 %e \n", FLT_MIN, FLT_MAX);
    printf("double의 최솟값 %e, 최댓값 %e \n", DBL_MIN, DBL_MAX);
    printf("long double의 최솟값 %e, 최댓값 %e \n", LDBL_MIN, LDBL_MAX);
    

    return 0;
}


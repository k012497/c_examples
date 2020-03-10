#include <stdio.h>
#include <math.h>
int l_search(int (*arr)[10], int len, int target);

int main()
{
    int array[3][10] = {0};
    int i = 0, j = 0, num = 0, search = 0;

    for ( i = 0; i < 10; i++)
    {
        array[0][i] = i+1;
        array[1][i] = pow(i+1,2);
        array[2][i] = pow(i+1,3);
    }

    /*//잘 입력됐는지 확인
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 10; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    */

    printf("세제곱값을 입력하시오 : ");
    scanf("%d", &num);

    search = l_search(array, 10, num);
    printf("%d의 세제곱근은 %d\n", num, search);

    
    return 0;
}


int l_search(int (*arr)[10], int len, int target)
{
	int i = 0, flag = 0;
	for ( i = 0 ; i < len ; i++)
	{
		if (target == arr[2][i]) 
        {
            flag = 1;
            break;
        }
	}
    if (flag == 1)
        return arr[0][i]; //찾은 경우
	else
	    return -1; //찾지 못한 경우
}

#include <stdio.h>

int main()
{
    int i = 1, multiple = 0, total_multiple = 0;

    for(;1;)
    {
        multiple = 3 * i;
        total_multiple = total_multiple + multiple;
        i++;
        if(multiple > 100-3) break;
    }

    printf("1부터 100사이의 모든 3의 배수의 합은 %d입니다. \n", total_multiple);

    return 0;
}

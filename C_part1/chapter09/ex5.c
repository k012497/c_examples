#include <stdio.h>

int square(int num);
int cube(int num);
int quartic(int num);
int quintic(int num);
void print(int num);

int i = 0;

int main()
{
    int num = 0;

    printf("A TABLE OF POWERS\n");
    printf("-------------------------------------------\n");
    printf("INTEGER   SQUARE   CUBE   QIARTOC   QUINTIC\n");
    printf("-------------------------------------------\n");

    for(i = 1; i < 4; i++)
    {
        print(i);
    }

    return 0;  
}


int square(int num)
{
    return num * num;
}

int cube(int num)
{
    return num * num * num;
}

int quartic(int num)
{
    return num * num * num * num;
}

int quintic(int num)
{
    return num * num * num * num * num;
}    

void print(int num)
{
    printf("    %3d      %3d      %3d      %3d      %3d\n", i, square(num), cube(num), quartic(num), quintic(num));
    return ;
}




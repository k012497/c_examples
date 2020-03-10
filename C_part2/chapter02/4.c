#include <stdio.h>
#include <time.h>
#include <unistd.h>

#define SIZE 5
#define MAX 55
#define MIN 1

void random (int a[], int size, int max, int min);
void print_array (int a[], int size);
void copy(int a[], int b[], int size);

int main()
{
    int a[SIZE] = {0,};
    int b[SIZE] = {0,};

    random(a, SIZE, MAX, MIN);
    usleep(1000000);
    random(b, SIZE, MAX, MIN);

    copy(a, b, SIZE);

    print_array(a, SIZE);
    print_array(b, SIZE);

    return 0;
}

void random (int a[], int size, int max, int min)
{
    srand(time(NULL));
    int i = 0;
    for ( i = 0; i < size; i++)
    {
        a[i] = rand()%(max-min+1)+min;
    }
    return;
}

void copy(int a[], int b[], int size)
{
    int  i = 0;
    for ( i = 0; i < size; i++)
    {
        b[i] = a[i];
    }
    return;
}

void print_array (int a[], int size)
{
    int i = 0;
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    return ;
}
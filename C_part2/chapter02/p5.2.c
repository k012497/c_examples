/*
교수님이 해주신 거
 */
#include <stdio.h>
#include <time.h>
#define SIZE 10

int main()
{
    int i = 0, max = 0, maxIndex = 0, min = 0, minIndex = 0;
    int a[SIZE] = {0,};

    srand(time(NULL));
    for ( i = 0; i < 100; i++) a[rand()%10]++;
    
    for ( i = 0; i < 10; i++) printf("%3d ", a[i]); 
    
    printf("\n");

    max = a[0];
    min = a[0]; //기준값 설정!!!!!!!!!!!!!!!!!!!!!!

    for ( i = 0; i < 10; i++)
    {
        if (max < a[i]) 
        {
            max = a[i]; 
            maxIndex = i;
        }
        if (min > a[i])
        {
            min = a[i];
            minIndex = i;
        }
    }
    
    printf("%d(이)가 %d번으로 최다, %d(이)가 %d번으로 최소\n", maxIndex, max, minIndex, min); 

    
    return 0;
}

//1. 0부터 9까지 난수(랜덤함수) 100번 생성
//2. 누적된 카운트값 출력
//3. 최빈값 구하기
//4. 가장 많이 생성된 수/ 가장 적게 생성된 수를 출력

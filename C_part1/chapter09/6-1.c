#include <stdio.h>
 
void count(void);
int input();
int sum(void);
int num1=0,num2=0,k=0;

int main(void)
{   
      input();
      sum();
      printf("총 연산수 : %d \n",k);

   return 0;
}
void count(void)
 {
    k++;
   return ;
 }
int input()
 {
    int i=0;

    for ( ; ; )
    {
        printf("숫자 두 개를 입력하세요(0 0-> exit):");
        scanf("%d %d",&num1,&num2);
      
        if(num1==0 && num2==0) break;
        count();
        printf("덧셈결과 : %d \n",sum());
        if(k>=3) break;
    }
    
    /*
    for(i=1;i<=100;i++)
    {
      printf("숫자 두 개를 입력하세요(0 0-> exit):");
      scanf("%d %d",&num1,&num2);
      
      if(num1==0 && num2==0) break;
      count();
      printf("덧셈결과 : %d \n",sum());
    }
    */

 
 }
int sum(void)
 {
   int sum=0;
   sum=num1+num2;
   return sum;
 }
#include <stdio.h>
int sum(void); //
int count(void); //
int input(void); //

 int num1=0,num2=0,j=0;

 int main(void)
{   
    int num;
    input();
    sum();
    printf("총 연산수 : %d \n",j);

   return 0;
}


 int input()
 {
    int i=0;
    for(i=1;i<=3;i++)
    { 
      int a = 0; //
      a = count(); //
      printf("숫자 두 개를 입력하세요(0 0-> exit):");
      scanf("%d %d",&num1,&num2);
      //j=count(); //
      if(num1==0&&num2==0) break;
      else if (a>=3) break;
      printf("덧셈결과 : %d \n",sum());
    }
 
 }
 int sum(void)
 {
   int sum=0;
   sum=num1+num2;
   return sum;
 }
 int count(void)
 {
    int count=0;
    count++;
   return count;
 }
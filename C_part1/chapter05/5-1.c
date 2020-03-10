 #include <stdio.h>

 int main ()
 {
     int a = 3;
     int b = a + 5;
     
     printf("a의 값 : %d\n", a);
     printf("b의 값 : %d\n", b);

     printf("a의 주소 : %x\n", &a);
     printf("b의 주소 : %x\n", &b);

     return 0;

 }
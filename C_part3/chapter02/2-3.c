#include <stdio.h>
#include <string.h>

int main()
{
    char array1[] = "Hello C";
    char array2[] = "안녕하세요";

    printf("영문 문자열의 길이 : %d \n", strlen(array1));
    printf("한글 문자열의 길이 : %d \n", strlen(array2));

    printf("영문 문자열의 길이 : %d \n", sizeof(array1));
    printf("한글 문자열의 길이 : %d \n", sizeof(array2)); //한글을 3바이트로 인식

    return 0;
}
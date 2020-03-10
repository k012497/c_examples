#include <stdio.h>
#include <time.h>
/*
time_t time(time_t *timer);
// time_t : unsigned int가 싫으면 이걸로 써라

struct tm *localtime( const time_t *timer ); localtime()라는 함수를 사용하면 리턴값으로 

struct tm { 
    int tm_sec; // 초 - [0～61] （閏秒を考慮）  
    int tm_min; // 분 - [0～59]  
    int tm_hour; // 시 - [0～23]  
    int tm_mday; // 일 - [1～31]  
    int tm_mon; // 월 - [0～11]  
    int tm_year; // 1900부터의 년 
    int tm_wday; // 일요일부터의 요일 - [0～6] 
    int tm_yday; // 년초부터의 통산 일수 - [0～365] 
    int tm_isdst; //서머 타임이 유효하면 양수, 유효하지 않으면 0, 불명이면 음수
    };
    
*/


int main()
{
    time_t currentTimeInfo = 0;//time_t로 변수명을 선언한다. 
    //unsigned int currentTimeInfo = 0;과 같은 것

    struct tm* dateInfoPointer = NULL; 
    //dateInfoPointer는 struct tm으로 된 변수의 번지를 기억한다.

    currentTimeInfo = time(NULL);
    //현재 날짜 정보를 초로 환산해서 값을 리턴한다.

    dateInfoPointer = localtime(&currentTimeInfo);
    //초로 환산한 값이 있는 변수의 번지를 전달하면 년월일~을 가지고 있는 struct tm 번지를 리턴한다.

    printf("%d/%d/%d \n" , dateInfoPointer->tm_year + 1900 , dateInfoPointer->tm_mon + 1 , dateInfoPointer->tm_mday);
    printf("%d:%d:%d\n", dateInfoPointer->tm_hour , dateInfoPointer->tm_min , dateInfoPointer->tm_sec);
    
    return 0;
}
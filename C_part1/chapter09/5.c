#include <stdio.h>
#include <math.h>
 
#define PI 3.141592
double sin_degree(double degree);
 
int main() {
    double sin_value, degree, radian;
 
    for(degree = 0; degree <= 180; degree += 10) 
        printf("sin(%d)의 값은 %f \n", (int)degree, sin_degree(degree));
 
    return 0;
}
 
double sin_degree(double degree) {
    double radian;
    radian = (PI * degree) / 180.0;
    return (sin(radian));
}

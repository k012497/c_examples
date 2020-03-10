#include <stdio.h>

int main()
{
    int i;
    float f;
    double d;

    i = (long)('a'+1.3);
    f = 2.49 + i;
    d = (double)f*i;
    
    return 0;
}

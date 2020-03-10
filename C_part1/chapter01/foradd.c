#include <stdio.h>

int main()
{
    float result = 0.0f;

    for(int i = 0 ; i < 100 ; i = i + 1)
    {
        result = result + 0.1f;
    }
    
    printf("%f\n", result);

    return 0;
}
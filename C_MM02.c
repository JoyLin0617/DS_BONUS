#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    float d, h;
    scanf("%f %f ", &d, &h);
    float result = d * h / 2;
    printf("%.1f\n", result);
    return 0;
}
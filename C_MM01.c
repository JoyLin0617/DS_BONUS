#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    float u, d, h;
    scanf("%f %f %f", &u, &d, &h);
    float result = (u + d) * h / 2;
    printf("Trapezoid area:%.1f\n", result);
    return 0;
}
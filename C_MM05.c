#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    double x;
    scanf("%lf", &x);
    double result = floor(x * x * 10 + 0.5) / 10;
    printf("%.1f\n", result);

    return 0;
}
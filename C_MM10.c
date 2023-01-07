#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    float x;
    scanf("%f", &x);

    printf("%.1f\n", x * 9 / 5 + 32);

    return 0;
}
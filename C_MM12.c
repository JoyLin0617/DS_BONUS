#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int x;
    scanf("%d", &x);

    printf("%.f\n", ceil(x / (1 - 30 * 2.54 / 100)));

    return 0;
}
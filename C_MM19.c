#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int x;
    scanf("%d", &x);
    if (x <= 800)
    {
        printf("%.1f\n", x * 0.9);
    }
    else if (800 < x && x < 1500)
    {
        printf("%.1f\n", x * 0.9 * 0.9);
    }
    else if (x >= 1500)
    {
        printf("%.1f\n", x * 0.9 * 0.79);
    }
    return 0;
}
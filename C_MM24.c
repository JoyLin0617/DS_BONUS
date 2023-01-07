#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int x, y;
    double m;
    scanf("%d %d", &x, &y);
    if (x < 60)
    {
        m = x * y;
    }
    else if (x <= 120)
    {
        m = (x - 60) * y * 1.33 + 60 * y;
    }
    else if (x > 120)
    {
        m = (x - 120) * y * 1.66 + 60 * y * 1.33 + 60 * y;
    }
    printf("%.1f\n", m);
    return 0;
}
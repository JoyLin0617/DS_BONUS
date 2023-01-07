#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int x, d = 0, h = 0, m = 0, s = 0;
    scanf("%d", &x);
    d = x / 60 / 60 / 24;
    x = x - d * 60 * 60 * 24;
    h = x / 60 / 60;
    x = x - h * 60 * 60;
    m = x / 60;
    s = x - m * 60;
    printf("%d days\n%d hours\n%d minutes\n%d seconds\n", d, h, m, s);

    return 0;
}
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int x, a, b, c;
    scanf("%d", &x);
    a = x / 100;
    b = x % 100 / 10;
    c = x % 100 % 10;
    if (x == (a * a * a + b * b * b + c * c * c))
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}
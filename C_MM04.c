#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int z = x % y;
    int a = x / y;
    if (x % y < 0)
    {
        if (a > 0)
        {
            a = a + 1;
        }
        else
        {
            a = a - 1;
        }
        z = x - a * y;
    }

    printf("%d+%d=%d\n", x, y, x + y);
    printf("%d*%d=%d\n", x, y, x * y);
    printf("%d-%d=%d\n", x, y, x - y);
    printf("%d/%d=%d...%d\n", x, y, a, z);
    return 0;
}
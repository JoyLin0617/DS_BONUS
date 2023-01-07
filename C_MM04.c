#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int z = x % y;
    if (x % y < 0)
    {
        z = 0 - z;
    }

    printf("%d+%d=%d\n", x, y, x + y);
    printf("%d*%d=%d\n", x, y, x * y);
    printf("%d-%d=%d\n", x, y, x - y);
    printf("%d/%d=%d...%d\n", x, y, x / y, z);
    return 0;
}
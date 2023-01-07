#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int x, a, b, c;
    scanf("%d", &x);
    a = x / 10;
    x = x - 10 * a;
    b = x / 5;
    c = x - 5 * b;
    printf("NT10=%d\nNT5=%d\nNT1=%d\n", a, b, c);

    return 0;
}
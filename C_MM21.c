#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int x;
    long long a = 1;
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        // printf("%lld %d\n", a, i);
        a = a * i;
        // printf("%lld\n", a);
    }
    printf("%lld\n", a);
    return 0;
}
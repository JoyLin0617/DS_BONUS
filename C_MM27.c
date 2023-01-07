#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int x, y, sum = 0;
    scanf("%d %d", &x, &y);
    for (int i = x; i <= y; i++)
    {
        sum = sum + i;
    }
    printf("%d\n", sum);
    return 0;
}
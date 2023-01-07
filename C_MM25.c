#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int x, sum = 0;
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        if (i % 3 == 0)
        {
            sum = sum + i;
        }
    }
    printf("%d\n", sum);
    return 0;
}
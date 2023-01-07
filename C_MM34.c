#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int x;
    scanf("%d", &x);

    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            printf("%d", i);
            if (x == i)
            {
                break;
            }
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
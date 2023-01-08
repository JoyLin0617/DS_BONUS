#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int x;
    scanf("%d", &x);
    int a = 35;
    while (a <= x)
    {
        printf("%d", a);
        if (a < x - 35)
        {
            printf(" ");
        }
        a = a + 35;
    }
    printf("\n");
    return 0;
}
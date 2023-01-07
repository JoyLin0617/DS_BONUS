#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int x;
    int ans = 1;
    scanf("%d", &x);
    if (x > 31)
    {
        printf("Value of more than 31\n");
    }
    else
    {
        while (x > 0)
        {
            ans = ans * 2;
            x--;
        }
        printf("%d\n", ans);
    }

    return 0;
}
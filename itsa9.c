#include <stdio.h>

int main()
{
    int x;
    int sum = 0;
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
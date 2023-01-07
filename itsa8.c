#include <stdio.h>

int main()
{
    int x;
    int sum = 0;
    scanf("%d", &x);
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    return 0;
}
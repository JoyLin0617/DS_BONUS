#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    if (x % 400 == 0)
    {
        printf("Bissextile Year\n");
    }
    else if (x % 4 == 0 && x % 100 != 0)
    {
        printf("Bissextile Year\n");
    }
    else
    {
        printf("Common Year\n");
    }

    return 0;
}
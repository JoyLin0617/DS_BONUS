#include <stdio.h>

int main()
{
    int x[8] = {0};
    int num;
    int i = 7;
    scanf("%d", &num);
    if (num > 0)
    {
        while (num > 0)
        {
            x[i] = num % 2;
            num = num / 2;
            i--;
        }
    }
    else
    {
        num = num + 256;
        while (num > 0)
        {
            x[i] = num % 2;
            num = num / 2;
            i--;
        }
    }

    for (int i = 0; i < 8; i++)
    {
        printf("%d", x[i]);
    }
    printf("\n");
    return 0;
}
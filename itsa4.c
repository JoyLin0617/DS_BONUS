#include <stdio.h>

int main()
{
    int h1, h2, m1, m2, time;
    int price = 0;
    scanf("%d %d", &h1, &m1);
    scanf("%d %d", &h2, &m2);
    time = ((h2 * 60 + m2) - (h1 * 60 + m1)) / 30;
    if (time <= 4)
    {
        printf("%d\n", time * 30);
    }
    else if (time <= 8)
    {
        time = time - 4;
        price = price + 30 * 4 + 40 * time;
        printf("%d\n", price);
    }
    else
    {
        time = time - 8;
        price = price + 30 * 4 + 40 * 4 + 60 * time;
        printf("%d\n", price);
    }
    return 0;
}
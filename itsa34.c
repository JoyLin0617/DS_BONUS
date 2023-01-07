#include <stdio.h>

int main()
{
    int s;
    float h;
    while (scanf("%f %d", &h, &s) != EOF)
    {
        if (s == 1)
        {
            printf("%.1f\n", (h - 80) * 0.7);
        }
        else
        {
            printf("%.1f\n", (h - 70) * 0.6);
        }
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char x, a, b, c, d, e, f, g, h, i, x1, x2;
    int sum, A, B, C, D, E, F, G, H, I;
    scanf("%c%c%c%c%c%c%c%c%c%c", &x, &a, &b, &c, &d, &e, &f, &g, &h, &i);
    A = a - '0';
    B = b - '0';
    C = c - '0';
    D = d - '0';
    E = e - '0';
    F = f - '0';
    G = g - '0';
    H = h - '0';
    I = i - '0';
    if (x == 'A')
    {
        x1 = 1;
        x2 = 0;
    }
    else if (x == 'B')
    {
        x1 = 1;
        x2 = 1;
    }
    else if (x == 'C')
    {
        x1 = 1;
        x2 = 2;
    }
    else if (x == 'D')
    {
        x1 = 1;
        x2 = 3;
    }
    else if (x == 'E')
    {
        x1 = 1;
        x2 = 4;
    }
    else if (x == 'F')
    {
        x1 = 1;
        x2 = 5;
    }
    else if (x == 'G')
    {
        x1 = 1;
        x2 = 6;
    }
    else if (x == 'H')
    {
        x1 = 1;
        x2 = 7;
    }
    else if (x == 'I')
    {
        x1 = 3;
        x2 = 4;
    }
    else if (x == 'J')
    {
        x1 = 1;
        x2 = 8;
    }
    else if (x == 'K')
    {
        x1 = 1;
        x2 = 9;
    }
    else if (x == 'L')
    {
        x1 = 2;
        x2 = 0;
    }
    else if (x == 'M')
    {
        x1 = 2;
        x2 = 1;
    }
    else if (x == 'N')
    {
        x1 = 2;
        x2 = 2;
    }
    else if (x == 'O')
    {
        x1 = 3;
        x2 = 5;
    }
    else if (x == 'P')
    {
        x1 = 2;
        x2 = 3;
    }
    else if (x == 'Q')
    {
        x1 = 2;
        x2 = 4;
    }
    else if (x == 'R')
    {
        x1 = 2;
        x2 = 5;
    }
    else if (x == 'S')
    {
        x1 = 2;
        x2 = 6;
    }
    else if (x == 'T')
    {
        x1 = 2;
        x2 = 7;
    }
    else if (x == 'U')
    {
        x1 = 2;
        x2 = 8;
    }
    else if (x == 'V')
    {
        x1 = 2;
        x2 = 9;
    }
    else if (x == 'X')
    {
        x1 = 3;
        x2 = 0;
    }
    else if (x == 'Y')
    {
        x1 = 3;
        x2 = 1;
    }
    else if (x == 'W')
    {
        x1 = 3;
        x2 = 2;
    }
    else if (x == 'Z')
    {
        x1 = 3;
        x2 = 3;
    }

    sum = x1 + 9 * x2 + 8 * A + 7 * B + 6 * C + 5 * D + 4 * E + 3 * F + 2 * G + H + I;
    // printf("%d\n", sum);
    if (sum % 10 == 0)
    {
        printf("CORRECT!!!\n");
    }
    else
    {
        printf("WRONG!!!\n");
    }
    return 0;
}
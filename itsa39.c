#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    char result[num];
    for (int i = 0; i < num; i++)
    {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);

        if (x >= 60 && y >= 60 && z >= 60)
        {
            result[i] = 'P';
        }
        else if (x < 60 && y >= 60 && z >= 60)
        {
            if (x + y + z >= 220)
            {
                result[i] = 'P';
            }
            else
            {
                result[i] = 'M';
            }
        }
        else if (x >= 60 && y < 60 && z >= 60)
        {
            if (x + y + z >= 220)
            {
                result[i] = 'P';
            }
            else
            {
                result[i] = 'M';
            }
        }
        else if (x >= 60 && y >= 60 && z < 60)
        {
            if (x + y + z >= 220)
            {
                result[i] = 'P';
            }
            else
            {
                result[i] = 'M';
            }
        }
        else if (x < 60 && y < 60 && z >= 60)
        {
            if (z >= 80)
            {
                result[i] = 'M';
            }
            else
            {
                result[i] = 'F';
            }
        }
        else if (x < 60 && y >= 60 && z < 60)
        {
            if (y >= 80)
            {
                result[i] = 'M';
            }
            else
            {
                result[i] = 'F';
            }
        }
        else if (x >= 60 && y < 60 && z < 60)
        {
            if (x >= 80)
            {
                result[i] = 'M';
            }
            else
            {
                result[i] = 'F';
            }
        }
        else
        {
            result[i] = 'F';
        }
    }

    for (int i = 0; i < num; i++)
    {
        printf("%c\n", result[i]);
    }

    return 0;
}
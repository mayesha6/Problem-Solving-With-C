#include <stdio.h>

int main()
{
    int T, X, Y, max = 0, min = 0, sum = 0;
    scanf("%d\n", &T);
    for (int j = 1; j <= T; j++)
    {
        scanf("%d %d", &X, &Y);
        if (X > Y)
        {
            max = X;
            min = Y;
        }
        else if (X < Y)
        {
            max = Y;
            min = X;
        }

        for (int i = min + 1; i < max; i++)
        {
            if (i % 2 != 0)
            {
                sum += i;
            }
        }
        printf("%d\n", sum);
        sum = 0;
    }

    return 0;
}
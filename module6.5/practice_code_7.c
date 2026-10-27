#include <stdio.h>

int main()
{
    int N, alpha = 65;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", alpha);
        }
        alpha++;
        printf("\n");
    }
    return 0;
}
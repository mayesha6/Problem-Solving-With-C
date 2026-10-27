#include <stdio.h>

int main()
{
    int T, N;
    long long int factorial = 1;
    scanf("%d\n", &T);
    for (int i = 1; i <= T; i++)
    {
        scanf("%d\n", &N);
        if (N >= 0)
        {
            for (int j = N; j >= 1; j--)
            {
                factorial *= j;
            }
            printf("%lld\n", factorial);
            factorial = 1;
        }
    }
    return 0;
}
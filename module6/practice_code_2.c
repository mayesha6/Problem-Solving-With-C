#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int arr[N], even = 0, odd = 0, positive = 0, negative = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < N; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even += 1;
        }
        else if (arr[i] % 2 != 0)
        {
            odd += 1;
        }

        if (arr[i] > 0)
        {
            positive += 1;
        }
        else if (arr[i] < 0)
        {
            negative += 1;
        }
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);
    return 0;
}
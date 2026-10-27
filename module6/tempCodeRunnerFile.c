for (int i = 1; i <= T; i++)
    {
        scanf("%d\n", &N);
        if (N >= 0)
        {
            for (int j = N; j >= 1; j--)
            {
                factorial *= j;
            }
            printf("%d\n", factorial);
            factorial = 1;
        }
    }
#include <stdio.h>

int main()
{
    char alpha;
    scanf("%c\n", &alpha);
    if (alpha == 122)
    {
        alpha = 97;
        printf("%c\n", alpha);
    }
    else if (alpha == 90)
    {
        alpha = 65;
        printf("%c\n", alpha);
    }
    else
    {

        printf("%c", alpha + 1);
    }
    return 0;
}
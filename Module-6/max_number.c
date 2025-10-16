#include <stdio.h>
int main()
{
    int num;
    int max = 0;
    while (scanf("%d", &num))
    {
        if (num > max)
        {
            max = num;
        }
    }
    printf("%d", max);

    return 0;
}
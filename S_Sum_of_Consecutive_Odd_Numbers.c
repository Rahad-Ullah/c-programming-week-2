#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);

        // sorting as x < y
        if (x > y)
        {
            int temp = x;
            x = y;
            y = temp;
        }

        int sum = 0;

        x++;
        while (x < y)
        {
            if (x % 2 != 0)
            {
                sum += x;
            }
            x++;
        }

        printf("%d\n", sum);
    }

    return 0;
}
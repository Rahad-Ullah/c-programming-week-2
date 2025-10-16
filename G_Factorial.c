#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);

        long long int fact = 1;

        if (n == 0)
        {
            printf("%lld\n", fact);
            continue;
        }

        while (n > 0)
        {
            fact *= n;
            n--;
        }

        printf("%lld\n", fact);
    }

    return 0;
}
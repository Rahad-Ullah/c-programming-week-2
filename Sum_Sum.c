#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int pos_sum = 0;
    int neg_sum = 0;

    for (int i = 1; i <= n; i++)
    {
        int a;
        scanf("%d", &a);

        if (a > 0)
        {
            pos_sum += a;
        }
        else
        {
            neg_sum += a;
        }
    }

    printf("%d %d", pos_sum, neg_sum);

    return 0;
}
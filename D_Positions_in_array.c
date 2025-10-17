#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        if (x <= 10)
        {
            printf("A[%d] = %d \n", i, x);
        }
    }

    return 0;
}
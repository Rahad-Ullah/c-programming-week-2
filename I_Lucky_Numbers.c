#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);

    int a = x % 10;
    int b = x / 10;

    if (a % b == 0)
    {
        printf("YES");
    }
    else if (b % a == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int searchKey;
    scanf("%d", &searchKey);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == searchKey)
        {
            printf("%d", i);
            return 0;
        }
    }

    printf("-1");

    return 0;
}
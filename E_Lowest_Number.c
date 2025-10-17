#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int min = arr[0];
    int position = 0 + 1;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            position = i + 1;
        }
    }

    printf("%d %d", min, position);

    return 0;
}
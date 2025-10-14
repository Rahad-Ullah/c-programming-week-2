#include <stdio.h>
int main()
{
    int x = 10;
    int y = x++; // post increment : y = x, x = x + 1 -> actions performs at first then increment
    printf("%d %d\n", x, y);
    int z = ++x; // pre increment : x = x + 1, z = x -> increment performs at first then actions
    printf("%d %d", x, z);

    return 0;
}
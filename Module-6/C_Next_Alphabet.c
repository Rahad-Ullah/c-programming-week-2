#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    ch = ch + 1;

    if (ch > 'z')
    {
        ch = 'a';
    }

    printf("%c", ch);

    return 0;
}
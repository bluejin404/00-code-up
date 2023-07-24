#include <stdio.h>

int a;

int main()
{
input:
    scanf("%d", &a);
    if (a != 0)
    {
        printf("%d\n", a);
        goto input;
    }
    return 0;
}
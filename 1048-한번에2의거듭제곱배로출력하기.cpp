#include <stdio.h>

long long a;
int b;

int main()
{
    scanf("%lld %d", &a, &b);
    printf("%lld", a<<b);
    return 0;
}
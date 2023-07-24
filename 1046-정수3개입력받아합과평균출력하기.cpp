#include <stdio.h>

long long a, b, c;

int main()
{
    scanf("%lld %lld %lld", &a, &b, &c);
    printf("%lld\n%0.1lf", a + b + c, (double)(a + b + c) / 3);
    return 0;
}
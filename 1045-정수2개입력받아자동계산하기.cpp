#include <stdio.h>

long long a, b;

int main()
{
    scanf("%lld %lld", &a, &b);
    printf("%lld\n%lld\n%lld\n%lld\n%lld\n%0.2lf", a + b, a - b, a * b, a / b, a % b, (double)a / b);
    return 0;
}
#include <stdio.h>
#include <algorithm>

int n;

struct data
{
    int num;
    int math;
    int cs;
} a[1001];

bool compare(data x, data y)
{
    if (x.math == y.math)
    {
        if (x.cs == y.cs)
            return x.num < y.num;
        else
            return x.cs > y.cs;
    }
    else
        return x.math > y.math;
}

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a[i].math, &a[i].cs);
        a[i].num = i + 1;
    }
    std::sort(a, a + n, compare);
    for (int i = 0; i < n; i++)
        printf("%d %d %d\n", a[i].num, a[i].math, a[i].cs);
    return 0;
}
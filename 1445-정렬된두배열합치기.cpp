#include <stdio.h>

int a[1001], b[1001], c[1001];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int j = 0; j < m; j++)
        scanf("%d", &b[j]);

    int p, q, r = 0;
    while ((p < n) && (q < m))
        c[r++] = (a[p] <= b[q]) ? a[p++] : b[q++];
    while (p < n)
        c[r++] = a[p++];
    while (q < m)
        c[r++] = b[q++];
    for (int k = 0; k < n + m; k++)
        printf("%d ", c[k]);
    return 0;
}
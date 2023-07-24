#include <stdio.h>
#include <algorithm>

int origin[50001], sorted[50001], n;

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &origin[i]);
    for (int i = 0; i < n; i++)
        sorted[i] = origin[i];

    std::sort(sorted, sorted + n + 1);

    for (int i = 0; i < n; i++)
    {
        int j;
        for (j=0; j<n; j++){
            if (sorted[i]==origin[j])
                printf("%d ", j);
        }
    }
    return 0;
}
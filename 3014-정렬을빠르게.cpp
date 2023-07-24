#include <stdio.h>
int end_stop = 100000, n, data[100000], temp, i, j;
int main()
{
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        data[temp]++;
    }
    for (i = 0; i < end_stop; i++)
    {
        for (j = 0; j < data[i]; j++)
            printf("%d ", i);
    }
}
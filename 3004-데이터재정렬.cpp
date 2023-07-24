#include <stdio.h>
#include <algorithm>

int n;

struct data
{
    int index;
    int value;
    int turn;
};

bool sort(struct data target1, struct data target2)
{
    return target1.value < target2.value;
}

bool resort(struct data target1, struct data target2)
{
    return target1.index < target2.index;
}

int main()
{
    struct data target[50001];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &target[i].value);
        target[i].index = i;
    }

    std::sort(target, target + n, sort);

    for (int i = 0; i < n; i++)
    {
        target[i].turn = i;
    }

    std::sort(target, target + n, resort);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", target[i].turn);
    }

    return 0;
}
#include <stdio.h>
#include <algorithm>
#include <math.h>

int n, count;

struct city
{
    int x;
    int y;
    int p;
};

bool compare_distance(struct city city1, struct city city2)
{
    float d1 = pow(city1.x, 2) + pow(city1.y, 2), d2 = pow(city2.x, 2) + pow(city2.y, 2);
    if (d1 == d2)
        return city1.p >= city2.p;
    else
        return d1 < d2;
}

int main()
{
    scanf("%d %d", &n, &count);
    struct city list[n];

    for (int i = 0; i < n; i++)
        scanf("%d %d %d", &list[i].x, &list[i].y, &list[i].p);
    std::sort(list, list + n, compare_distance);

    for (int i = 0; i < n; i++)
    {
        count += list[i].p;
        if (count>=1000000){
            printf("%.3f", sqrt(pow(list[i].x, 2) + pow(list[i].y, 2)));
            return 0;
        }
    }
    printf("-1");
    return 0;
}
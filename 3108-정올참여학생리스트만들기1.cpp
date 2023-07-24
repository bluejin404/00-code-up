#include <stdio.h>
#include <algorithm>

int n;

struct student
{
    char code;
    int no;
    char name[11];
} stu[101];

bool comp(struct student stu1, struct student stu2)
{
    return stu1.no < stu2.no;
}

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf(" %c %d %s", &stu[i].code, &stu[i].no, stu[i].name);
        if (stu[i].code == 'D')
        {
            for (int j = 0; j < i; j++)
            {
                if (stu[j].no == stu[i].no)
                    stu[j].no = 10001;
            }
            stu[i].no = 10001;
        }
    }

    std::sort(stu, stu + n, comp);

    for (int i = 0; i < 5; i++)
    {
        int pick;
        scanf("%d", &pick);
        printf("%d %s\n", stu[pick-1].no, stu[pick-1].name);
    }
    return 0;
}
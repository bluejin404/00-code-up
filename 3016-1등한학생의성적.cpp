#include <stdio.h>
#include <algorithm>

int n;

struct list
{
    char name[11];
    int sub_score[4];
    int sub_turn[4];
};

bool comp_sub1(struct list stu1, struct list stu2)
{
    return stu1.sub_score[1] > stu2.sub_score[1];
}

bool comp_sub2(struct list stu1, struct list stu2)
{
    if (stu1.sub_score[2]==stu2.sub_score[2]){
        if (stu1.sub_score[1]==stu2.sub_score[1])
            if (stu1.sub_score[3]==stu2.sub_score[3])
                return 1;
            else
                return stu1.sub_score[3]>stu2.sub_score[3];
        else
            return stu1.sub_score[1]>stu2.sub_score[1];
    }
    else
        return stu1.sub_score[2] > stu2.sub_score[2];
}

bool comp_sub3(struct list stu1, struct list stu2)
{
    if (stu1.sub_score[3]==stu2.sub_score[3]){
        if (stu1.sub_score[1]==stu2.sub_score[1])
            if (stu1.sub_score[2]==stu2.sub_score[2])
                return 1;
            else
                return stu1.sub_score[2]>stu2.sub_score[2];
        else
            return stu1.sub_score[1]>stu2.sub_score[1];
    }
    else
        return stu1.sub_score[3] > stu2.sub_score[3];
}

int main()
{
    struct list stu[101];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%s %d %d %d", stu[i].name, &stu[i].sub_score[1], &stu[i].sub_score[2], &stu[i].sub_score[3]);

    std::sort(stu, stu + n, comp_sub3);
    for (int i = 0; i < n; i++)
        stu[i].sub_turn[3] = i;

    std::sort(stu, stu + n, comp_sub2);
    for (int i = 0; i < n; i++)
        stu[i].sub_turn[2] = i;

    std::sort(stu, stu + n, comp_sub1);
    for (int i = 0; i < n; i++)
        stu[i].sub_score[1] = i;

    printf("%s %d %d", stu[0].name, stu[0].sub_turn[2] + 1, stu[0].sub_turn[3] + 1);
    return 0;
}
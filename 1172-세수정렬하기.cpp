#include <stdio.h>

int ipt[3], opt[3];

int main()
{
    scanf("%d %d %d", &ipt[0], &ipt[1], &ipt[2]);
    if (ipt[0] < ipt[1] && ipt[0] < ipt[2])
    {
        opt[0] = ipt[0];
        if (ipt[1] < ipt[2])
        {
            opt[1] = ipt[1];
            opt[2] = ipt[2];
        }
        else
        {
            opt[1] = ipt[2];
            opt[2] = ipt[1];
        }
    }
    else if (ipt[1] < ipt[0] && ipt[1] < ipt[2])
    {
        opt[0] = ipt[1];
        if (ipt[0] < ipt[2])
        {
            opt[1] = ipt[0];
            opt[2] = ipt[2];
        }
        else
        {
            opt[1] = ipt[2];
            opt[2] = ipt[0];
        }
    }
    else
    {
        opt[0] = ipt[2];
        if (ipt[0] < ipt[1])
        {
            opt[1] = ipt[0];
            opt[2] = ipt[1];
        }
        else
        {
            opt[1] = ipt[1];
            opt[2] = ipt[0];
        }
    }

    printf("%d %d %d", opt[0], opt[1], opt[2]);
    return 0;
}
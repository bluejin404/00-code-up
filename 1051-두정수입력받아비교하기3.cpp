#include <stdio.h>

int a, b;

int main(){
    scanf("%d %d", &a, &b);
    if (b>=a)
        printf("1");
    else
        printf("0");
    return 0;
}
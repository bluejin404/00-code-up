#include <stdio.h>

char a;

int main(){
    while (a!='q'){
        scanf("%c ", &a);
        printf("%c\n", a);
    }
    return 0;
}
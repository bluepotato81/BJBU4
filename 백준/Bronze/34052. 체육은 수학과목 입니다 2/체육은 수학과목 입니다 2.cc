#include <stdio.h>

int main() {
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a+b+c+d+300<=1800) {
        printf("Yes");
    }
    else {
        printf("No");
    }
    return 0;
}
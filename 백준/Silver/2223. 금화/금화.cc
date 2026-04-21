#include <stdio.h>

int main() {
    int t,x,m;
    scanf("%d %d %d", &t, &x, &m);

    int minap=1000001;
    int a,b;
    for(int i=0; i<m;i++) {
        scanf("%d %d", &a, &b);
        if(minap>(a/b)+!(!(a%b))) {
            minap=(a/b)+!(!(a%b));
        }
    }

    if(minap>t) {
        printf("%d", x*t);
        return 0;
    }
    if(minap==1) {
        printf("0");
        return 0;
    }

    int ans=(minap-1)*x;

    ans+=((t-minap+1)/2)*x;

    printf("%d", ans);

    return 0;
}

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    while(n--) {
        int a,b,c,d,e,f;
        scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
        int utot=a+b+c;
        int rtot=d+e+f;
        int count;
        if(utot>rtot) {
            count=1;
        }
        else {
            count=0;
        }

        int color=0;
        if(a>d) {
            color=1;
        }
        else if(a==d) {
            if(b>e) {
                color=1;
            }
            else if(b==e) {
                if(c>f) {
                    color=1;
                }
            }
        }

        if(count&&color) {
            printf("%d %d %d %d %d %d\nboth\n\n",a,b,c,d,e,f);
        }
        else if(count) {
            printf("%d %d %d %d %d %d\ncount\n\n",a,b,c,d,e,f);
        }
        else if(color) {
            printf("%d %d %d %d %d %d\ncolor\n\n",a,b,c,d,e,f);
        }
        else {
            printf("%d %d %d %d %d %d\nnone\n\n",a,b,c,d,e,f);
        }

    }

    return 0;
}

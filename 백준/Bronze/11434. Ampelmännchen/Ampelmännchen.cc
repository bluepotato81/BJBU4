#include <stdio.h>

int main() {
    int k;
    scanf("%d", &k);

    for(int i=0;i<k;i++) {
        int n,w,e;
        scanf("%d %d %d", &n,&w,&e);

        int tot=0;

        int a,b,c,d;
        while(n--){
            scanf("%d %d %d %d",&a,&b,&c,&d);
            int max;
            if(a*w+c*e>b*w+d*e) {
                max=a*w+c*e;
            }
            else {
                max=b*w+d*e;
            }
            tot+=max;
        }
        printf("Data Set %d:\n%d\n\n", i+1, tot);
    }

    return 0;
}

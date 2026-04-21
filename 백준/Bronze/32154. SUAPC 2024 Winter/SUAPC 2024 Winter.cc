#include <stdio.h>

int k[10]={11,9,9,9,8,8,8,8,8,8};


int main() {
    int n;
    scanf("%d",&n);
    printf("%d\n", k[n-1]);

    if(n==1) {
        printf("A B C D E F G H J L M");
    }
    if(n==2 ||n==3) {
        printf("A C E F G H I L M");
    }
    if(n==4){
        printf("A B C E F G H L M");
    }
    if(n>=5 &&n<=9) {
        printf("A C E F G H L M");
    }
    if(n==10) {
        printf("A B C F G H L M");
    }
    return 0;
}

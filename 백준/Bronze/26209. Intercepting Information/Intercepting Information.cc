#include <stdio.h>

int main() {
    int a;
    int k=8;
    int s=1;
    while(k--) {
        scanf("%d", &a);
        if(a==9) {
            s=0;
        }
    }
    
    if(s){
        printf("S");
    }
    else {
        printf("F");
    }
    
    
    
    return 0;
}
#include <stdio.h>

int main() {
    char k[11];
    scanf("%s", k);
    
    if(k[0]=='S') {
        printf("HIGHSCHOOL");
    }if(k[0]=='C') {
        printf("MASTER");
    }if(k[0]=='2') {
        printf("0611");
    }if(k[0]=='A') {
        printf("CONTEST");
    }
    
    return 0;
}
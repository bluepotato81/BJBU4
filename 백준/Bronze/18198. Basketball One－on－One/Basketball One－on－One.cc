#include <stdio.h>
#include <string.h>

int main() {
    char in[201];
    scanf("%s", in);
    
    int as=0;
    int bs=0;
    
    size_t len=strlen(in);
    
    for(size_t i=0; i<len; i+=2) {
        if(in[i]=='A'){
            as+=in[i+1]-'0';
        }
        if(in[i]=='B'){
            bs+=in[i+1]-'0';
        }
    }
    
    if(as>bs) {
        printf("A");
    }
    else {
        printf("B");
    }
    
    return 0;
}
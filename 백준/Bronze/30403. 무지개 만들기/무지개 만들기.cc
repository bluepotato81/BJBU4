#include <stdio.h>


int main() {
    int k;
    scanf("%d", &k);
    char a[k+1];

    scanf("%s", a);

    int s[7]={0, };
    int b[7]={0, };

    for(int i=0; i<k;i++) {
        if(a[i]=='r' ) {
            s[0]=1;
        }
        if(a[i]=='o' ) {
            s[1]=1;
        }
        if(a[i]=='y' ) {
            s[2]=1;
        }
        if(a[i]=='g' ) {
            s[3]=1;
        }if(a[i]=='b' ) {
            s[4]=1;
        }if(a[i]=='i' ) {
            s[5]=1;
        }
        if(a[i]=='v' ) {
            s[6]=1;
        }
        if(a[i]=='r'-'a'+'A' ) {
            b[0]=1;
        }
        if(a[i]=='o'-'a'+'A' ) {
            b[1]=1;
        }
        if(a[i]=='y'-'a'+'A' ) {
            b[2]=1;
        }
        if(a[i]=='g'-'a'+'A' ) {
            b[3]=1;
        }if(a[i]=='b'-'a'+'A' ) {
            b[4]=1;
        }if(a[i]=='i'-'a'+'A' ) {
            b[5]=1;
        }
        if(a[i]=='v'-'a'+'A' ) {
            b[6]=1;
        }
    }

    int sc=1;
    int bc=1;
    for(int i=0;i<7;i++) {
        if(s[i]==0) {
            sc=0;
        }
        if(b[i]==0) {
            bc=0;
        }
    }

    if(sc&&bc) {
        printf("YeS");
    }
    else if(!sc&&bc) {
        printf("YES");
    }
    else if(sc&&!bc) {
        printf("yes");
    }
    else {
        printf("NO!");
    }

    return 0;
}

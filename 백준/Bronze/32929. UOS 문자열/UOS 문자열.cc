#include <stdio.h>
int main() {
    int x;
    scanf("%d", &x);
    
    char uos[3];
    
    uos[0]='S';
    uos[1]='U';
    uos[2]='O';
    printf("%c", uos[x%3]);
    return 0;
}
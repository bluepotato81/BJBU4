#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    while(n--) {
        int k;
        scanf("%d", &k);

        printf("%d\n", ((k+1)/2)*((k+1)/2));
    }


    return 0;
}

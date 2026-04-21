#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    double in=0;
    double ina;
    for(int i=0;i<n;i++) {
        scanf("%lf", &ina);
        in+=ina*ina*ina;
    }

    printf("%lf", cbrt(in));



    return 0;
}

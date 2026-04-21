#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

auto clamp=[](double x) {
    if (x<-1) return -1.0;
    if (x>1) return 1.0;
    return x;
};


int main() {
    double x1,y1,r1,x2,y2,r2;
    scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&r1,&x2,&y2,&r2);

    double dx=x1-x2;
    double dy=y1-y2;
    if((dx*dx)+(dy*dy)>(r1+r2)*(r1+r2)) {
        printf("0.000");
        return 0;
    }
    else if((dx*dx)+(dy*dy)<(r1-r2)*(r1-r2) || (x1==x2&&y1==y2)) {
        double a = M_PI*(min(r1,r2))*(min(r1,r2));
        printf("%.3lf",a);
        return 0;
    }



    double dis = sqrt((dx*dx)+(dy*dy));

    double a = r1*r1*acos(clamp((dis*dis + r1*r1 - r2*r2)/(2*dis*r1))) + r2*r2*acos(clamp((dis*dis + r2*r2 - r1*r1)/(2*dis*r2))) - sqrt((-dis+r1+r2)*(dis+r1-r2)*(dis-r1+r2)*(dis+r1+r2))/2;

    printf("%.3lf", a);
    return 0;
}

#include <stdio.h>

typedef struct{
    long long x;
    long long y;
}point;

point k[10000];
int n;

int ccw(long long ax, long long ay, long long bx, long long by, long long cx, long long cy) {
    long long p = (bx-ax)*(cy-ay) - (by-ay)*(cx-ax);
    if(p>0) {
        return 1;
    }
    else if(p==0) {
        return 0;
    }
    else {
        return -1;
    }
}

int raycast(long long ax, long long ay) {
    int cross=0;
    for(int i=0; i<n-1;i++) {
        if((k[i].y>ay)!=(k[i+1].y>ay)) {
            double in = (double)k[i].x+(((double)ay-(double)k[i].y)*((double)k[i+1].x-(double)k[i].x)/((double)k[i+1].y-(double)k[i].y));
            if(in>ax) {
                cross++;
            }

        }
    }

    if((k[n-1].y>ay)!=(k[0].y>ay)) {
        double in = (double)k[n-1].x+(((double)ay-(double)k[n-1].y)*((double)k[0].x-(double)k[n-1].x)/((double)k[0].y-(double)k[n-1].y));
        if(in>ax) {
            cross++;
        }

    }

    if(cross%2 ==1) {
        return 1;
    }
    else {
        return 0;
    }
}

int max(int a, int b) {
    if(a>b) {
        return a;
    }
    else {
        return b;
    }
}

int min(int a, int b) {
    if(a<b) {
        return a;
    }
    else {
        return b;
    }
}

int main() {
    scanf("%d", &n);

    for(int i=0;i<n;i++) {
        scanf("%lld %lld", &k[i].x, &k[i].y);
    }

    long long tx;
    long long ty;

    for(int i=0; i<3;i++) {
        scanf("%lld %lld",&tx, &ty);
        int check=1;
        int dr=ccw(k[0].x, k[0].y, k[1].x, k[1].y, tx, ty);
        if(k[0].x==tx && k[0].y==ty) {
            printf("1\n");
            continue;
        }
        if(dr==0 && (tx >= min(k[0].x, k[1].x) && tx <= max(k[0].x, k[1].x) && ty >= min(k[0].y, k[1].y) && ty <= max(k[0].y, k[1].y))) {
            printf("1\n");
            continue;
        }
        int contcheck=0;
        for(int j=1; j<n-1;j++) {
            if(ccw(k[j].x,k[j].y, k[j+1].x, k[j+1].y, tx, ty)==0 && (tx >= min(k[j].x, k[j+1].x) && tx <= max(k[j].x, k[j+1].x) && ty >= min(k[j].y, k[j+1].y) && ty <= max(k[j].y, k[j+1].y))) {
                printf("1\n");
                contcheck=1;
                break;
            }
            if(k[j].x==tx && k[j].y==ty) {
                printf("1\n");
                contcheck=1;
                break;
            }
        }
        if(contcheck) {
            continue;
        }
        int fincmp= ccw(k[n-1].x, k[n-1].y,k[0].x, k[0].y, tx, ty);
        if(fincmp==0 && (tx >= min(k[n-1].x, k[0].x) && tx <= max(k[n-1].x, k[0].x) && ty >= min(k[n-1].y, k[0].y) && ty <= max(k[n-1].y, k[0].y))) {
            printf("1\n");
            continue;
        }
        if(k[n-1].x==tx && k[n-1].y==ty) {
            printf("1\n");
            continue;
        }


        printf("%d\n", raycast(tx, ty));
    }



    return 0;
}

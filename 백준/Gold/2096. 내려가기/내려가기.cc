#include <stdio.h>

int ma(int a, int b) {
    if(a>b) {
        return a;
    }
    else {
        return b;
    }
}

int mi(int a, int b) {
    if(a<b) {
        return a;
    }
    else {
        return b;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n][3];
    for(int i=0; i<n;i++) {
        for(int j=0;j<3;j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int max[3];
    max[0]=arr[0][0];
    max[1]=arr[0][1];
    max[2]=arr[0][2];

    for(int i=1; i<n;i++) {
        int temp[3];
        temp[0]=arr[i][0]+ma(max[0], max[1]);
        temp[1]=arr[i][1]+ma(max[0],ma(max[1], max[2]));
        temp[2]=arr[i][2]+ma(max[1],max[2]);
        max[0]=temp[0];
        max[1]=temp[1];
        max[2]=temp[2];
    }
    int M=ma(max[0],ma(max[1],max[2]));

    int min[3];
    min[0]=arr[0][0];
    min[1]=arr[0][1];
    min[2]=arr[0][2];

    for(int i=1; i<n;i++) {
        int temp[3];
        temp[0]=arr[i][0]+mi(min[0], min[1]);
        temp[1]=arr[i][1]+mi(min[0],mi(min[1], min[2]));
        temp[2]=arr[i][2]+mi(min[1],min[2]);
        min[0]=temp[0];
        min[1]=temp[1];
        min[2]=temp[2];
    }

    int m=mi(min[0],mi(min[1],min[2]));

    printf("%d %d", M, m);


    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char univ[31];
    char name[31];
    int prob;
    int pen;
}team;

typedef struct {
    char univ[31];
} university;

int comparet(const void* a, const void* b) {
    const team* t1=(const team*)a;
    const team* t2=(const team*)b;
    if(t1->prob==t2->prob){
        return t1->pen-t2->pen;
    }
    else {
        return t2->prob-t1->prob;
    }

}


int main() {
    int n,k;
    scanf("%d %d", &n, &k);

    team in[n];
    for(int i=0;i<n;i++) {
        scanf("%s %s %d %d", in[i].univ, in[i].name, &in[i].prob, &in[i].pen);
    }

    qsort(in, n, sizeof(team), comparet);

    university univs[n];
    university ans[k];


    int done=0;
    for(int i=0; i<n; i++) {
        int check=1;
        for(int j=0;j<done;j++) {
            if(strcmp(univs[j].univ, in[i].univ)==0) {
                check=0;
                break;
            }
        }
        if(check) {
            strcpy(univs[done].univ, in[i].univ);
            strcpy(ans[done].univ, in[i].name);
            done++;
        }
        if(done==k) {
            break;
        }
    }

    for(int i=0;i<k;i++) {
        printf("%s\n",ans[i].univ);
    }

    return 0;
}

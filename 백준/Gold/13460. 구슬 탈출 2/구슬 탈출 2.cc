#include <iostream>
#include <vector>
#include <queue>

using namespace std;

typedef struct {
    int x;
    int y;
}co;

typedef struct {
    co red;
    co blue;
}sit;

char board[10][10];
int visited[10][10][10][10]={0, };
int dy[4]={-1,1,0,0};
int dx[4]={0,0,-1,1};

co mov(co ball, int dir, int &dist) {
    while(board[ball.y+dy[dir]][ball.x+dx[dir]]!='#'  &&  board[ball.y][ball.x]!='O') {
        ball.y+=dy[dir];
        ball.x+=dx[dir];
        dist++;
        if(board[ball.y][ball.x]=='O') {
            break;
        }
    }
    return ball;
}

int main() {
    int n,m;
    scanf("%d %d", &n, &m);

    co red,blue;

    for(int i=0; i<n;i++) {
        scanf("%s", board[i]);
        for(int j=0; j<m;j++) {
            if(board[i][j]=='R') {
                red={j,i};
            }
            else if(board[i][j]=='B') {
                blue={j,i};
            }
        }
    }

    queue<sit> q;
    q.push({red,blue});
    visited[red.y][red.x][blue.y][blue.x]=1;

    int turns=0;

    while(!q.empty() && turns<10) {
        int l=q.size();
        for(int j=0;j<l;j++) {

            sit k=q.front();
            q.pop();

            for(int dir=0;dir<4; dir++) {
                int rdist=0, bdist=0;
                co nr=mov(k.red, dir, rdist);
                co nb=mov(k.blue,dir,bdist);

                if(board[nb.y][nb.x]=='O') {
                    continue;
                }
                else if(board[nr.y][nr.x]=='O') {
                    printf("%d", turns+1);
                    return 0;
                }

                if(nr.x==nb.x && nr.y==nb.y) {
                    if (rdist> bdist) {
                        nr.x-=dx[dir];
                        nr.y-=dy[dir];
                    }
                    else {
                        nb.x-=dx[dir];
                        nb.y-=dy[dir];
                    }
                }

                if(!visited[nr.y][nr.x][nb.y][nb.x]) {
                    visited[nr.y][nr.x][nb.y][nb.x]=1;
                    q.push({nr, nb});
                }
            }
        }
        turns++;
    }
    printf("-1");




    return 0;
}

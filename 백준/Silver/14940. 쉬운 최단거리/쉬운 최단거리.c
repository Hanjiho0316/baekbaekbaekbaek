#include <stdio.h>
#include <stdlib.h>
#define MAX 1000
#define Queue_size (MAX*MAX)
typedef struct{
    int x,y;
}Point;

int n,m;
int map[MAX][MAX];
int dist[MAX][MAX];
Point queue[Queue_size];
int front = 0, rear = 0;
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,1,-1};


void enqueue(Point p){
    queue[rear++] = p;
}

Point dequeue(){
    return queue[front++];
}

void bfs(int startx,int starty){
    dist[startx][starty] = 0;
    enqueue((Point){startx,starty});
    while(front < rear){
        Point current = dequeue();
        int x = current.x , y = current.y;
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx >=0 && nx < n && ny >=0 && ny < m && map[nx][ny] == 1 && dist[nx][ny] ==-1){
                dist[nx][ny] = dist[x][y] +1;
                enqueue((Point){nx,ny});
            }
        }
    }
}

int main(){
    scanf("%d %d",&n,&m);
    int goalx = -1 , goaly = -1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d",&map[i][j]);
            if(map[i][j] == 2){
                goalx = i;
                goaly = j;
            }
            dist[i][j] = -1;
        }
    }
    bfs(goalx,goaly);
    for(int i =0; i <n; i++){
        for(int j =0; j < m; j++){
            if(map[i][j] == 0){
                printf("0 ");
            }else if(dist[i][j] == -1){
                printf("-1 ");
            }else {
                printf("%d ",dist[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
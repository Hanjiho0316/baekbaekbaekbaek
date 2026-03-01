#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int dist[101][101];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i==j) dist[i][j] = 0;
            else dist[i][j] = 10000;
        }
    }
    while(m--){
        int start,end;
        scanf("%d %d",&start,&end);
        dist[start][end] = 1;
        dist[end][start] = 1;
    }
    int min_bacon = 9999;
    int person = -1;
    for (int k = 1; k <= n; k++) {         // 거쳐가는 사람
        for (int i = 1; i <= n; i++) {     // 시작 사람
            for (int j = 1; j <= n; j++) { // 도착 사람
                if (dist[i][j] > dist[i][k] + dist[k][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
    for(int i = 1; i <= n; i++){
        int current_bacon = 0;
        for(int j = 1; j <= n; j++){
            current_bacon += dist[i][j];
        }
        if(current_bacon < min_bacon){
            min_bacon = current_bacon;
            person = i;
        }
    }
    printf("%d\n",person);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100000001
int n,m;
int ans[101][101];
int min(int a, int b){
    if(a < b){
        return a;
    }else{
        return b;
    }
}


int main(){
    scanf("%d %d",&n,&m);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j) ans[i][j] = 0; // 자기 자신은 0
            else ans[i][j] = MAX;
        }
    }
    for(int i = 0; i < m; i++){
        int start,end,cost;
        scanf("%d %d %d",&start,&end,&cost);
        if(ans[start][end] > cost){
            ans[start][end] = cost;
        }
    }

    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                // 오버플로우 방지 및 최솟값 갱신
                if (ans[i][k] != MAX && ans[k][j] != MAX) {
                    ans[i][j] = min(ans[i][j], ans[i][k] + ans[k][j]);
                }
            }
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(ans[i][j] == MAX){
                printf("0 ");
            }else if(i==j){
                printf("0 ");
            }else{
                printf("%d ",ans[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
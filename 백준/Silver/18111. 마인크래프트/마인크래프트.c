#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 256
int main(){
    int N,M,B;
    scanf("%d %d %d",&N,&M,&B);
    int land[501][501];
    for(int i = 0; i < N; i++){
        for(int j = 0; j <M; j++){
            scanf("%d",&land[i][j]);
        }
    }
    int min_time = 1e9;
    int best_height = -1;
    for(int target = 0; target <= MAX_HEIGHT; target++){
        int time = 0;
        int inventory = B;
        for(int i = 0; i <N; i++){
            for(int j = 0; j < M; j++){
                int diff = land[i][j] - target;

                if(diff>0){
                    time += 2* diff;
                    inventory += diff;
                }else{
                    time += -diff;
                    inventory -= -diff;
                }
            }
        }
        if(inventory < 0){
            continue;
        }
        if(time < min_time){
            min_time = time;
            best_height = target;
        }else if(time == min_time && target > best_height){
            best_height = target;
        }
    }
    printf("%d %d\n",min_time,best_height);
    return 0;
}
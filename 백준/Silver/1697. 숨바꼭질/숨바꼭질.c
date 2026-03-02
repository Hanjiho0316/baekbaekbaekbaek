#include <stdio.h>
#include <stdlib.h>

int queue[100001];
int visited[100001] = {0,};

int front = 0, rear= 0;

void push(int item){
    queue[rear++] = item;
}

int pop(){
    return queue[front++];
}

int isempty(){
    return front == rear;
}

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    push(n);
    visited[n] = 1;
    while(!isempty()){
        int curr = pop();
        if(curr == k){
            printf("%d\n",visited[curr] - 1);
        }
        int next_pos[3] = {curr-1,curr+1,curr*2};
        for(int i = 0; i < 3; i++){
            int next = next_pos[i];
            if(next >= 0 && next <= 100000 && visited[next] == 0){
                visited[next] = visited[curr] + 1;
                push(next);
            }    
        }
    }
    return 0;
}
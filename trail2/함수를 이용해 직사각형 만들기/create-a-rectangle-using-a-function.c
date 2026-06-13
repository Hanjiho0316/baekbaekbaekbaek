#include <stdio.h>

void exprint(int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("1");
        }
        printf("\n");
    }
}

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d %d",&a,&b);
    exprint(a,b);
    return 0;
}
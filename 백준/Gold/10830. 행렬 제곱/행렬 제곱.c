#include <stdio.h>
#include <string.h>
#include <stdlib.h>
long long arr[100][100];
long long ans[100][100];
int n;
long long b;

void multiple(long long X[100][100],long long Y[100][100]){
    long long temp[100][100] = {0,}; 
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < n; j++){
            temp[i][j] = 0;
            for(int k = 0; k < n; k++){
                temp[i][j] += X[i][k] * Y[k][j];
            }
            temp[i][j] %= 1000;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            X[i][j] = temp[i][j];
        }
    }
}


int main(){
    scanf("%d %lld",&n,&b);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%lld",&arr[i][j]);
            arr[i][j] %= 1000;
            if(i==j){
                ans[i][j] = 1;
            }
        }
    }


    while(b > 0){
        if(b % 2 == 1){
            multiple(ans,arr);
        }
        multiple(arr,arr);
        b /= 2;
    }


    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%lld ",ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}
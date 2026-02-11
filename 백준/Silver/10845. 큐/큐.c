#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define max(a,b) ((a)>(b) ? (a) : (b))
#define max3(a,b,c) ( max (max(a,b),c) )
int main(){
    int arr[10000];
    int n;
    scanf("%d",&n);
    int x = 0;
    int num;
    char order[20];
    for(int i = 0; i < n; i++){
        scanf("%s",order);
        if(strcmp(order,"push") == 0){
            scanf("%d",&num);
            arr[x] = num;
            x += 1;
        }else if(strcmp(order,"pop")== 0){
            if(x == 0){
                printf("-1\n");
            }else{
                printf("%d\n",arr[0]);
                for(int j = 1; j < x; j++){
                    arr[j-1] = arr[j];
                }
                arr[x-1] = 0;
                x-= 1;
            }
        }else if(strcmp(order,"size") == 0){
            printf("%d\n",x);
        }else if(strcmp(order,"empty") == 0){
            if(x ==0){
                printf("1\n");
            }else{
                printf("0\n");
            }
        }else if(strcmp(order,"front") == 0){
            if(x ==0){
                printf("-1\n");
            }else{
                printf("%d\n",arr[0]);
            }
        }else if(strcmp(order,"back") == 0){
            if(x == 0){
                printf("-1\n");
            }else{
                printf("%d\n",arr[x-1]);
            }
        }
    }
    return 0;
}

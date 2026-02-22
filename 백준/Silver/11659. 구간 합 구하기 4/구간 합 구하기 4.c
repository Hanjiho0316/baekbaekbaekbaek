#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max(a,b) ((a)>(b) ? (a) : (b))
#define max3(a,b,c) ( max (max(a,b),c) )
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[100000] = {0};
    int arr2[100000] = {0};
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    arr2[0] = arr[0];
    arr2[1] = arr[1]+arr[0];
    for(int i = 2; i < n; i++){
        arr2[i] = arr2[i-1]+arr[i];
    }
    
    for(int i = 0; i < m; i++){
        int a,b;
        scanf("%d %d",&a,&b);
        if(a == 1){
            printf("%d\n",arr2[b-1]);
        }else if(a==b){
            printf("%d\n",arr[b-1]);
        }else{
            printf("%d\n", arr2[b-1] - arr2[a-2]);
        }
    }
    return 0;
}

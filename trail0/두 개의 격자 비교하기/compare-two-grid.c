#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d %d",&a,&b);
    int arr1[10][10];
    int arr2[10][10];
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            if(arr1[i][j] == arr2[i][j]){
                printf("0 ");
            }else{
                printf("1 ");
            }
        }
        printf("\n");
    }
    return 0;
}
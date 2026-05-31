#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= a; j++){
            printf("%d * %d = %d",i,j,i*j);
            if(j == a){
                printf("\n");
            }else{
                printf(", ");
            }
        }
    }
    return 0;
}
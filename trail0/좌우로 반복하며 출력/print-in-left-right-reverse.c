#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    for(int i = 0; i < a; i++){
        for(int j = 0 ; j < a; j++){
            if(i % 2 == 0){
                printf("%d",j+1);
            }else{
                printf("%d",a-j);
            }
        }
        printf("\n");
    }
    return 0;
}
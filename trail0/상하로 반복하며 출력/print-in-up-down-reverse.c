#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    for(int i = 0; i < a; i++){
        for(int j = 0; j <a; j++){
            if(j % 2 == 0){
                printf("%d",i+1);
            }else{
                printf("%d",a-i);
            }
        }
        printf("\n");
    }
    return 0;
}
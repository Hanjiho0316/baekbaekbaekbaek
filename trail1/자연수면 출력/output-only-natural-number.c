#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d %d",&a,&b);
    if(a > 0){
        for(int i = 0; i < b; i++){
            printf("%d",a);
        }
    }else{
        printf("0");
    }
    return 0;
}
#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    if(a % 4 == 0){
        if(a % 100 == 0 && a % 400 != 0){
            printf("false");
        }else{
            printf("true");
        }
    }else{
        printf("false");
    }
    return 0;
}
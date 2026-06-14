#include <stdio.h>

int check(int n){
    if(n % 4 == 0){
        if(n % 100 == 0 && n % 400 != 0){
            return 0;
        }else{
            return 1;
        }
    }
}

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    if(check(a)){
        printf("true");
    }else{
        printf("false");
    }
    return 0;
}
#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    if(a >= 3000){
        printf("book");
    }else if( a>= 1000){
        printf("mask");
    }else if (a >= 500){
        printf("pen");
    }else{
        printf("no");
    }
    return 0;
}
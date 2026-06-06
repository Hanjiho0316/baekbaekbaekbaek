#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a > c && b > d){
        printf("1\n");
    }else{
        printf("0\n");
    }
    return 0;
}
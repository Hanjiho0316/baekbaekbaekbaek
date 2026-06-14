#include <stdio.h>

int answer(int a,int b,int c){
    if(a < b && a < c){
        return a;
    }else if(b < a && b < c){
        return b;
    }else if(c < a && c < b){
        return c;
    }
}

int main() {
    // Please write your code here.
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d",answer(a,b,c));
    return 0;
}
#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d %d",&a,&b);
    while(a >= b){
        printf("%d ",a);
        a -= 2;
    }
    return 0;
}
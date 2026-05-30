#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d %d",&a,&b);
    int c[10];
    c[0] = a;
    c[1] = b;
    printf("%d %d ",a,b);
    for(int i = 2; i < 10; i++){
        c[i] = c[i-1] + c[i-2];
        if(c[i] > 9){
            c[i] -= 10;
        }
        printf("%d ",c[i]);
    }
    return 0;
}
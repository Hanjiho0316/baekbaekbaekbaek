#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d %d",&a,&b);
    int c = a+b;
    for(int i = 0; i < b; i++){
        printf("%d\n",c);
        c += b;
    }
    return 0;
}
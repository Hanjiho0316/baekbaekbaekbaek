#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    for(int i = a; i <= 5*a; i += a){
        printf("%d ",i);
    }
    return 0;
}
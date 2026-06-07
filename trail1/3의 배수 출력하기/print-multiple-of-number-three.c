#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    int i = 3;
    while(i <= a){
        printf("%d ",i);
        i += 3;
    }
    return 0;
}
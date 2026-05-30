#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    int b[100];
    for(int i = 0; i < a; i++){
        scanf("%d",&b[i]);
    }
    for(int i = 0; i < a; i++){
        printf("%d ",b[i]*b[i]);
    }
    return 0;
}
#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    int b[100];
    for(int i = 0; i < a; i++){
        scanf("%d",&b[i]);
    }
    for(int i = a-1; i >= 0; i--){
        if(b[i] % 2 == 0){
            printf("%d ",b[i]);
        }
    }
    return 0;
}
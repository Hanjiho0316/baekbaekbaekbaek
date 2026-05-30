#include <stdio.h>

int main() {
    // Please write your code here.
    int a5 = 0;
    int b5 = 0;
    int c;
    for(int i = 0; i < 10; i++){
        scanf("%d",&c);
        if(c % 3 == 0){
            a5 += 1;
        }
        if(c % 5 ==0){
            b5 += 1;
        }
    }
    printf("%d %d",a5,b5);
    return 0;
}
#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d",&n);
    int result = 0;
    for(int i = 1; i <= 100; i++){
        result += i;
        if(result >= n){
            printf("%d",i);
            break;
        }
    }
    return 0;
}
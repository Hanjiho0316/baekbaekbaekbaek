#include <stdio.h>

int answer(int n){
    int result = 0;
    for(int i = 1; i <= n; i++){
        result += i;
    }
    result /= 10;
    return result;
}

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    printf("%d",answer(a));
    return 0;
}
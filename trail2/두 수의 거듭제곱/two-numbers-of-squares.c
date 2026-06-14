#include <stdio.h>

int answer(int a, int b){
    int result = a;
    for(int i = 0; i < b-1; i++){
        result *= a;
    }
    return result;
}

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",answer(a,b));
    return 0;
}
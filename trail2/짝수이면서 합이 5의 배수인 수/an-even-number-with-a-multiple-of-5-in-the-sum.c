#include <stdio.h>

int answer(int a){
    int result = 0;
    result += a % 10;
    a /= 10;
    result += a % 10;
    return result;
}

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    if(answer(a) % 5 == 0 && a % 2 == 0){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}
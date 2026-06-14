#include <stdio.h>

int answer(int a, int b){
    int result = 0;
    for(int i = a; i <= b; i++){
        int check = 1;
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                check = 0;
            }
        }
        if(check){
            result += i;
        }
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
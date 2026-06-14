#include <stdio.h>

int check(int a){
    if(a % 2 == 0){
        return 0;
    }else if(a % 10 == 5){
        return 0;
    }else if(a % 3 == 0 && a % 9 != 0){
        return 0;
    }
    return 1;
}

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d %d",&a,&b);
    int result = 0;
    for(int i = a; i <= b; i++){
        if(check(i)){
            result += 1;
        }
    }
    printf("%d",result);
    return 0;
}
#include <stdio.h>

int check(int a){
    for(int i = 2; i < a; i++){
        if(a % i == 0){
            return 0;
        }
    }
    int temp = a;
    int checksum = 0;
    while(temp > 0){
        checksum += temp % 10;
        temp /= 10;
    }
    if(checksum % 2 == 0){
        return 1;
    }
    return 0;
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
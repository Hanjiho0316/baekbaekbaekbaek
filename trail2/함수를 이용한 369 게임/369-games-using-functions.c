#include <stdio.h>
#include <stdbool.h>

bool check(int n){
    if(n % 3 == 0){
        return true;
    }

    int temp = n;
    while(temp > 0){
        int digit = temp % 10;
        if(digit == 3 || digit == 6 || digit == 9){
            return true;
        }
        temp /= 10;
    }
    return false;
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int result = 0;
    
    for(int i = a; i <=b; i++){
        if(check(i)){
            result++;
        }
    }

    printf("%d\n",result);
    return 0;
}
#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b,sum;
    scanf("%d %d",&a,&b);
    sum = 0;
    for(int i = a; i <= b; i++){
        if(i% 2 == 0){
            sum += i;
        }
    }
    printf("%d",sum);
    return 0;
}
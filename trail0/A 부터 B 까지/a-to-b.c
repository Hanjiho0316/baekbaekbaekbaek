#include <stdio.h>

int main() {
    // Please write your code here.
    int a, b;
    scanf("%d %d",&a,&b);
    int result = a;
    while(1){
        printf("%d ",result);
        if(result % 2 == 1){
            result *= 2;
            if(result == b){
                printf("%d",result);
                break;
            }else if(result > b){
                break;
            }
        }else{
            result += 3;
            if(result == b){
                printf("%d",result);
                break;
            }else if(result > b){
                break;
            }
        }
    }
    return 0;
}
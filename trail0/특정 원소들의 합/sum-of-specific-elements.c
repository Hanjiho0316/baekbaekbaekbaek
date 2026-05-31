#include <stdio.h>

int main() {
    // Please write your code here.
    int a,result;
    result = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d",&a);
            if(i >= j){
                result += a;
            }
        }
    }
    printf("%d",result);
    return 0;
}
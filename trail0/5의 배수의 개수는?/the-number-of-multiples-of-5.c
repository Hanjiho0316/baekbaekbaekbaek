#include <stdio.h>

int main() {
    // Please write your code here.
    int result = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            int a;
            scanf("%d",&a);
            if(a % 5 == 0){
                result += 1;
            }
        }
    }
    printf("%d",result);
    return 0;
}
#include <stdio.h>

int main() {
    // Please write your code here.
    int num = -1;
    while(1){
        scanf("%d",&num);
        if(num == 0){
            break;
        }else{
            printf("%d\n",num);
        }
    }
    return 0;
}
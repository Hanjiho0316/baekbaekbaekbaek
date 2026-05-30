#include <stdio.h>

int main() {
    // Please write your code here.
    int answer = 0;
    while(1){
        scanf("%d",&answer);
        if(answer > 25){
            printf("Lower\n");
        }else if(answer < 25){
            printf("Higher\n");
        }else{
            printf("Good\n");
            break;
        }
    }
    return 0;
}
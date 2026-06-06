#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    if((a % 2 == 1 && a % 3 == 0)||(a % 2 == 0 && a % 5 == 0)){
        printf("true");
    }else{
        printf("false");
    }
    return 0;
}
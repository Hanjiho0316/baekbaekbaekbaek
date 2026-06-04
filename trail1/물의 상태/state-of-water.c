#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    if(a >= 100){
        printf("vapor");
    }else if(a >= 0){
        printf("water");
    }else{
        printf("ice");
    }
    return 0;
}
#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    if(a >= 3 && a <= 5){
        printf("Spring");
    }else if(a >= 6 && a <= 8){
        printf("Summer");
    }else if(a >= 9 && a <= 11){
        printf("Fall");
    }else{
        printf("Winter");
    }
    return 0;
}
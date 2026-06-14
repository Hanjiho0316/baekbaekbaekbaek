#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d %d",&a,&b);
    if(a == 1 || a == 3 || a == 5 || a == 7 || a == 8 || a == 10 || a == 12){
        if(b <= 31){
            printf("Yes");
        }else{
            printf("No");
        }
    }else if(a == 4 || a == 6 || a == 9 || a == 11){
        if(b <= 30){
            printf("Yes");
        }else{
            printf("No");
        }
    }else if(a == 2){
        if(b <= 28){
            printf("Yes");
        }else{
            printf("No");
        }
    }else{
        printf("No");
    }
    return 0;
}
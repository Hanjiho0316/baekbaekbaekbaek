#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d %d",&a,&b);
    if(a == 0 && b >= 19){
        printf("MAN");
    }else if(a == 1 && b >= 19){
        printf("WOMAN");
    }else if(a == 0 && b < 19){
        printf("BOY");
    }else{
        printf("GIRL");
    }
    return 0;
}
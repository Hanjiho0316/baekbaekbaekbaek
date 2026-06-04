#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    if(a>=80){
        printf("pass");
    }else{
        printf("%d more score",80-a);
    }
    return 0;
}
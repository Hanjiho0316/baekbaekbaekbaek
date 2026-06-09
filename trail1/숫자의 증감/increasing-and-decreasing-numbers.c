#include <stdio.h>

int main() {
    // Please write your code here.
    char a;
    int b;
    scanf("%c %d",&a,&b);
    if(a == 'A'){
        for(int i = 1; i <= b; i++){
            printf("%d ",i);
        }
    }else{
        for(int i = b; i >= 1; i--){
            printf("%d ",i);
        }
    }
    return 0;
}
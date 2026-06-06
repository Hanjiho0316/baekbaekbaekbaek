#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    char c,d;
    scanf("%d %c %d %c",&a,&c,&b,&d);
    if((a >= 19 && c == 'M') ||(b >= 19 && d == 'M')){
        printf("1");
    }else{
        printf("0");
    }
    return 0;
}
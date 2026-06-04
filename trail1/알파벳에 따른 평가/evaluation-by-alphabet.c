#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    char a;
    scanf("%c",&a);
    if(a == 'S'){
        printf("Superior");
    }else if(a == 'A'){
        printf("Excellent");
    }else if(a == 'B'){
        printf("Good");
    }else if(a == 'C'){
        printf("Usually");
    }else if(a == 'D'){
        printf("Effort");
    }else{
        printf("Failure");
    }
    return 0;
}
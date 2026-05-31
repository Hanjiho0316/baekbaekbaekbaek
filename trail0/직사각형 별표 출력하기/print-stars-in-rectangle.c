#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
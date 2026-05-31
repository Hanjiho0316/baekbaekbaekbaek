#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    for(int i = 0; i < a; i++){
        for(int j = 0; j < (i*2) + 1; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
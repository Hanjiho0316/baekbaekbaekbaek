#include <stdio.h>

void exprint(int a){
    int b = 1;
    for(int i = 0; i < a; i++){
        for(int j = 0; j < a; j++){
            printf("%d ", b);
            b++;
            if(b == 10){
                b = 1;
            }
        }
        printf("\n");
    }
}

int main() {
    // Please write your code here.
    int c;
    scanf("%d",&c);
    exprint(c);
    return 0;
}
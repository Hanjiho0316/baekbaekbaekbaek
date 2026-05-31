#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    int answer = 1; 
    for(int i = 0; i < a; i++){
        for(int j = 0; j <= i; j++){
            printf("%d ",answer);
            answer += 1;
        }
        printf("\n");
    }
    return 0;
}
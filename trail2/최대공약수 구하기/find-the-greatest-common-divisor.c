#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int max = 0;
    for(int i = 1; i <= 100; i++){
        if(n % i == 0 && m % i == 0){
            max = i;
        }
    }
    // Please write your code here.
    printf("%d",max);
    return 0;
}
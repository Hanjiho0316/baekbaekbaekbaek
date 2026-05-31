#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    for(int i = 0; i < 4; i++){
        int result = 0;
        for(int j = 0; j < 4; j++){
            scanf("%d",&a);
            result += a;
        }
        printf("%d\n",result);
    }
    return 0;
}
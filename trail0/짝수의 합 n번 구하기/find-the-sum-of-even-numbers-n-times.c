#include <stdio.h>

int main() {
    // Please write your code here.
    int a;
    scanf("%d",&a);
    for(int i = 0; i < a; i++){
        int b,c;
        scanf("%d %d",&b,&c);
        int result = 0;
        for(int j = b; j <= c; j++){
            if(j%2 == 0){
                result += j;
            }
        }
        printf("%d\n",result);
    }
    return 0;
}
#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d %d",&a,&b);
    int result = 0;
    for(int i = a; i <= b; i++){
        int answer = 0;

        for(int j = 1; j <= i; j++){
            if(i % j == 0){
                answer += 1;
            }
        }
        if(answer == 3){
            result += 1;
        }
    }
    printf("%d\n",result);
    return 0;
}
#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d %d",&a,&b);
    int bmi = (10000 * b) / (a*a);
    printf("%d\n",bmi);
    if(bmi >= 25){
        printf("Obesity");
    }
    return 0;
}
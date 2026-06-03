#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d %d",&a,&b);
    float c = a+b;
    printf("%.2lf",c/(a-b));
    return 0;
}
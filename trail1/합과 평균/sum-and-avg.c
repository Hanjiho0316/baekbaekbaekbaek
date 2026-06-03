#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b;
    scanf("%d %d",&a,&b);   
    float c = a+b;
    float d = (c)/2;
    printf("%.0f %.1lf",c,d);
    return 0;
}
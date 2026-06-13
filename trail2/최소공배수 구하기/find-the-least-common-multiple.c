#include <stdio.h>

int getgcd(int a, int b){
    while( b!= 0){
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    // Please write your code here.
    int gcd = getgcd(n,m);
    int lcm = (n * m) / gcd;
    printf("%d",lcm);
    return 0;
}
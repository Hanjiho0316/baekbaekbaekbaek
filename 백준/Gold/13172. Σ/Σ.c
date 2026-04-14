#include <stdio.h>

#define MOD 1000000007

long long power(long long a, long long b){
    long long res = 1;
    a %= MOD;
    while(b > 0){
        if(b%2 == 1){
            res = (res*a) % MOD;
        }
        a = (a*a) % MOD;
        b /= 2;
    }
    return res;
}

int main(){
    int M;
    scanf("%d",&M);
    long long total = 0;
    for(int i = 0; i < M; i++){
        long long n,s;
        scanf("%lld %lld",&n,&s);
        long long inv = power(n,MOD-2);
        long long current = (s*inv) % MOD;
        total = (total+current) % MOD;
    }
    printf("%lld\n",total);
}
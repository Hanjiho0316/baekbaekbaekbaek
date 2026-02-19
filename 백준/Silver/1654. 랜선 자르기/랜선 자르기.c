#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define max(a,b) ((a)>(b) ? (a) : (b))
#define max3(a,b,c) ( max (max(a,b),c) )


int main(){
    long long lan[10000];
    int K,N;
    scanf("%d %d",&K,&N);
    long long max = 0;
    for(int i = 0; i < K; i++){
        scanf("%lld",&lan[i]);
        if(lan[i] > max) max = lan[i];
    }

    long long left = 1, right = max;
    long long result = 0;
    while(left <= right){
        long long mid = (left + right) / 2;
        long long count = 0;
        for(int i = 0; i < K; i++){
            count += lan[i] / mid;
        }
        if(count >= N){
            result = mid;
            left = mid +1;
        }else{
            right = mid -1;
        }
    }
    printf("%lld\n",result);
    return 0;
}

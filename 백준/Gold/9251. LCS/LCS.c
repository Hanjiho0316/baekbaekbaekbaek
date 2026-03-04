#include <stdio.h>
#include <string.h>
#define MAX(a,b) (((a)>(b)) ? (a) : (b))

char a[1005];
char b[1005];
int dp[1005][1005] = {0,};
int main(){
    scanf("%s",a);
    scanf("%s",b);
    int alen = strlen(a);
    int blen = strlen(b);
    for(int i = 1; i <= alen; i++){
        for(int j = 1; j <= blen; j++){
            if(a[i-1] == b[j-1]){
                dp[i][j] = dp[i-1][j-1] + 1;
            }else{
                dp[i][j] = MAX(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    printf("%d\n",dp[alen][blen]);
    return 0;
}
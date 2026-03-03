#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void compute(char *pattern, int *pi, int P){
    int k = 0;
    pi[0] = 0;
    for(int i = 1; i < P; i++){
        while(k>0 && pattern[k] != pattern[i]){
            k = pi[k-1];
        }
        if(pattern[k] == pattern[i]){
            k++;
        }
        pi[i] = k;
    }
}


int kmp(char *text, int M, char *pattern, int P){
    int pi[P];
    compute(pattern,pi,P);
    int count = 0;
    int k = 0;
    for(int i = 0; i < M; i++){
        while(k > 0 && pattern[k] != text[i]){
            k = pi[k-1];
        }
        if(pattern[k] == text[i]){
            k++;
        }
        if(k == P){
            count++;
            k = pi[k-1];
        }
    }
    return count;
}



int main(){
    int n,m;
    char s[1000001];
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%s",s);

    char pattern[2*n +1];
    for(int i = 0; i < n; i++){
        pattern[2*i] = 'I';
        pattern[2*i+1] = 'O';
    }
    pattern[2*n] = 'I';

    int result = kmp(s,m,pattern,2*n+1);
    printf("%d\n",result);
    return 0;
}
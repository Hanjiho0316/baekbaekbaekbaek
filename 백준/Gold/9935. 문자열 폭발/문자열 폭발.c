#include <stdio.h>
#include <string.h>

char a[1000001];
char b[100];
char ans[1000001]; // 결과를 담을 스택

int main() {
    if (scanf("%s", a) == EOF) return 0;
    if (scanf("%s", b) == EOF) return 0;

    int a_len = strlen(a);
    int b_len = strlen(b);
    int idx = 0; 

    for (int i = 0; i < a_len; i++) {
        ans[idx++] = a[i]; 
     
        if (idx >= b_len) {
            int match = 1;
            for (int j = 0; j < b_len; j++) {
                if (ans[idx - b_len + j] != b[j]) {
                    match = 0;
                    break;
                }
            }
            if (match) {
                idx -= b_len;
            }
        }
    }
    ans[idx] = '\0'; 
  
    if (idx == 0) {
        printf("FRULA\n");
    } else {
        printf("%s\n", ans);
    }

    return 0;
}
#include <stdio.h>

int n1, n2;
int a[100], b[100];

int main() {
    scanf("%d %d", &n1, &n2);
    for (int i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    for (int j = 0; j < n2; j++)
        scanf("%d", &b[j]);
    
    // Please write your code here.
    int check = 0;
    for(int i = 0; i <= n1-n2; i++){
        for(int j = 0; j < n2; j++){
            if(a[i + j] == b[j]){
                check = 1;
            }else{
                check = 0;
                break;
            }
        }
        if(check == 1){
            printf("Yes");
            return 0;
        }
    }
    printf("No");
    return 0;
}
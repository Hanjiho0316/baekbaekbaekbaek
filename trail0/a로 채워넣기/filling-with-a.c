#include <stdio.h>
#include <string.h>
int main() {
    // Please write your code here.
    char str1[100];
    scanf("%s",str1);
    for(int i = 0; i < strlen(str1); i++){
        if(i == 1 || i == strlen(str1)-2){
            printf("a");
        }else{
            printf("%c",str1[i]);
        }
    }
    return 0;
}